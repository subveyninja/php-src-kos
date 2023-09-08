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


def folders_iterator(source_root, file):
    for folder in [line.strip('\n') for line in open(file, encoding="utf8", errors="surrogateescape").readlines()]:
        if not folder.startswith('#'):
            if os.path.isdir(os.path.join(source_root, folder)):
                yield folder


def copy_tests(src_root, dst_root, rel_path, recursive):
    print('Copying tests from {}...'.format(rel_path))
    src_path = os.path.join(src_root, rel_path)
    dst_path = os.path.join(dst_root, rel_path)
    os.makedirs(dst_path, exist_ok=True)
    if recursive:
        shutil.copytree(src_path, dst_path, dirs_exist_ok=True, ignore=shutil.ignore_patterns('*.o', '*.lo', '*.c', '*.h'))
    else:
        for file in os.listdir(src_path):
            if os.path.isfile(os.path.join(src_path, file)):
                shutil.copy(os.path.join(src_path, file), os.path.join(dst_path, file))


def main(argv):
    source_path = ''
    modules_file = ''
    folders_file = ''
    dst_path = ''
    try:
        opts, args = getopt.getopt(argv, "hs:d:m:f:", ["source_path=", "dst_path", "modules_file=", "folders_file="])
    except getopt.GetoptError:
        print('copy_tests.py -s <source_path> -d <dst_path> -m <modules> -f <folders>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('copy_tests.py -s <source_path> -d <dst_path> -m <modules> -f <folders>')
            sys.exit()
        elif opt in ("-s", "--source_path"):
            source_path = arg
        elif opt in ("-d", "--dst_path"):
            dst_path = arg
        elif opt in ("-m", "--modules_file"):
            modules_file = arg
        elif opt in ("-f", "--folders_file"):
            folders_file = arg

    for rel_path in folders_iterator(os.path.abspath(source_path), modules_file):
        copy_tests(source_path, dst_path, rel_path, True)
    for rel_path in folders_iterator(os.path.abspath(source_path), folders_file):
        copy_tests(source_path, dst_path, rel_path, False)


if __name__ == "__main__":
    main(sys.argv[1:])
