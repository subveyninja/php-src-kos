#!/usr/bin/python3

import shutil
import os
import fnmatch
import sys
import getopt


def inverse_ignore_patterns(*patterns: str):
    def _inverse_ignore_patterns(path, names):
        ignored_names = set(names)
        for pattern in patterns:
            ignored_names -= set(fnmatch.filter(names, pattern))

        ignored_names -= {
            name for name in ignored_names
            if os.path.isdir(os.path.join(path, name))
        }
        return ignored_names

    return _inverse_ignore_patterns


def modules_iterator(source_root, file):
    for module in [line.strip('\n') for line in open(file, encoding="utf8", errors="surrogateescape").readlines()]:
        if not module.startswith('#'):
            path = os.path.join(source_root, module)
            if os.path.isdir(path):
                yield module, path


def copy_tests(module, src_path, dst_root):
    print('Copying {} module tests...'.format(module))
    dst_path = os.path.join(dst_root, module)
    os.makedirs(dst_path, exist_ok=True)
    shutil.copytree(src_path, dst_path, dirs_exist_ok=True, ignore = shutil.ignore_patterns('*.o', '*.lo', '*.c', '*.h'))


def main(argv):
    source_path = ''
    modules_file = ''
    dst_path = ''
    try:
        opts, args = getopt.getopt(argv,"hs:d:m:",["source_path=","dst_path","modules_file="])
    except getopt.GetoptError:
        print('copy_tests.py -s <source_path> -m <modules>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('test.py -i <inputfile> -o <outputfile>')
            sys.exit()
        elif opt in ("-s", "--source_path"):
            source_path = arg
        elif opt in ("-d", "--dst_path"):
            dst_path = arg
        elif opt in ("-m", "--modules_file"):
            modules_file = arg

    for module, path in modules_iterator(os.path.abspath(source_path), modules_file):
        copy_tests(module, path, os.path.abspath(dst_path))


if __name__ == "__main__":
   main(sys.argv[1:])
