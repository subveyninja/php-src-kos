#!/usr/bin/python3

import sys
import collections
from enum import Enum
from colorama import Fore


class Result(Enum):
    UNKNOWN = 0
    PASS = 1
    SKIP = 2
    BORK = 3
    WARN = 4
    FAIL = 5
    XFAIL = 6


result_codes = {
    "PASS": Result.PASS,
    "SKIP": Result.SKIP,
    "BORK": Result.BORK,
    "WARN": Result.WARN,
    "FAIL": Result.FAIL,
    "XFAIL": Result.XFAIL,
}

result_text = {
    Result.PASS: Fore.GREEN + "PASS" + Fore.WHITE,
    Result.SKIP: Fore.LIGHTBLACK_EX + "SKIP" + Fore.WHITE,
    Result.BORK: Fore.YELLOW + "BORK" + Fore.WHITE,
    Result.WARN: Fore.YELLOW + "WARN" + Fore.WHITE,
    Result.FAIL: Fore.RED + "FAIL" + Fore.WHITE,
    Result.XFAIL: Fore.GREEN + "XFAIL" + Fore.WHITE,
}


def get_result_code(result):
    try:
        return result_codes[result]
    except KeyError:
        return Fore.LIGHTBLACK_EX + "UNKNOWN" + Fore.WHITE


def get_result_text(code):
    try:
        return result_text[code]
    except KeyError:
        return Result.UNKNOWN


def find_test_result(text):
    # return text.find(chr(27) + "[1;")
    return text.find("[1;")


def get_test_result(text):
    return get_result_code(text.split(' ')[0][6:-4])


def tests_iterator(file):
    multiline = False
    res = Result.UNKNOWN
    with open(file, "r", encoding="utf-8", errors="ignore") as f:
        for line in f.readlines():
            pos = find_test_result(line)
            if pos > -1:
                line = line[pos:]
                res = get_test_result(line)
                begin = line.find("[/tests") + 1
                if begin > 0:
                    end = line.find("]", begin)
                    yield res, line[begin:end]
                else:
                    multiline = True
            elif multiline:
                begin = line.find("[/tests") + 1
                if begin > 0:
                    multiline = False
                    end = line.find("]", begin)
                    yield res, line[begin:end]


class StatGroup(collections.Counter):
    def get_values(self):
        return [
            self.total(),
            self[Result.PASS],
            self[Result.SKIP],
            self[Result.BORK],
            self[Result.WARN],
            self[Result.FAIL],
            self[Result.XFAIL],
            self.percent()
        ]

    def percent(self):
        try:
            return "{:.2f}".format(self[Result.PASS] / (self.total() - self[Result.SKIP] - self[Result.WARN]) * 100)
        except ZeroDivisionError:
            return "-"


class Stat:
    def __init__(self):
        self._groups = dict()
        self._total = StatGroup()

    @staticmethod
    def parse_file_name(file):
        path = file.split('/')
        return path[2], '/'.join(path[2:min(len(path) - 1, 6)])

    def _inc_group(self, group, res):
        if group not in self._groups:
            self._groups[group] = StatGroup()
        self._groups[group][res] += 1

    def inc(self, file, res):
        module, group = Stat.parse_file_name(file)
        self._inc_group(module, res)
        self._inc_group(group, res)
        self._total[res] += 1

    @staticmethod
    def print_line(group, values):
        print("{:60s}{}".format(group, "".join(["{:6s}".format(str(x)) for x in values])))

    def print(self):
        Stat.print_line("", ["TOTAL", "PASS", "SKIP", "BORK", "WARN", "FAIL", "XFAIL", "%"])
        for key in self._groups:
            Stat.print_line(key, self._groups[key].get_values())
        Stat.print_line("total", self._total.get_values())


def check_argv(argv, count, usage):
    if len(argv) != count:
        print(argv[0] + usage)
        sys.exit()


def action_stat(argv):
    check_argv(argv, 3, "stat <log file name>")

    s = Stat()
    for res, file in tests_iterator(argv[2]):
        s.inc(file, res)
    s.print()


def action_diff(argv):
    check_argv(argv, 4, "diff <old log file> <new log file>")

    old_results = {file: res for res, file in tests_iterator(argv[2])}
    new_results = {file: res for res, file in tests_iterator(argv[3])}
    for file in new_results:
        if file in old_results:
            if old_results[file] != new_results[file]:
                print(get_result_text(new_results[file]), file)

    for file in old_results:
        if file not in new_results:
            print("Absent in new: {}".format(file))

    for file in new_results:
        if file not in old_results:
            print("Absent in old: {}".format(file))


def action_filter(argv):
    check_argv(argv, 4, "<PASS|SKIP|BORK|WARN|FAIL|XFAIL> <log file name>")

    rc = get_result_code(argv[2])
    if rc == Result.UNKNOWN:
        print(argv[0] + "<PASS|SKIP|BORK|WARN|FAIL|XFAIL> <log file name>")
        sys.exit()

    for res, file in tests_iterator(argv[3]):
        if res == rc:
            print(file)


def main(argv):
    if len(argv) < 2:
        print(argv[0] + "<action> [args]")
        sys.exit()
    globals()["action_" + argv[1]](argv)


if __name__ == "__main__":
    main(sys.argv)
