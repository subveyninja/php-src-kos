#!/usr/bin/python3

import shutil
import os
import fnmatch
import sys
import getopt
 
def rm_empty_folders(rootdir: str):
    for dirpath, dirnames, filenames in os.walk(rootdir, topdown=False):
        if not os.listdir(dirpath):
            os.rmdir(dirpath)

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

def main(argv):
    src = ''
    dst = ''
    try:
        opts, args = getopt.getopt(argv,"hi:o:",["ifile=","ofile="])
    except getopt.GetoptError:
        print('copy_tests.py -i <inputfile> -o <outputfile>')
        sys.exit(2)
    for opt, arg in opts:
        if opt == '-h':
            print('test.py -i <inputfile> -o <outputfile>')
            sys.exit()
        elif opt in ("-i", "--ifile"):
            src = arg
        elif opt in ("-o", "--ofile"):
            dst = arg

    print("Trying to copy: " + src + " to: " + dst)

    # Use this to copy specific files
    # shutil.copytree(src, dst, dirs_exist_ok=True, ignore = inverse_ignore_patterns('*.phpt', '*.php', '*.inc', '*.odt', '*.zip', '*.gz', '*.tar', '*.xml', '*.phar', '*.ini', '*.txt', '*.csv', '*.pubkey', '*.tgz', '*.cnf', '*.pem'))

    # Use it to skip `'*.o', '*.lo', '*.c', '*.h'` files while copying
    shutil.copytree(src, dst, dirs_exist_ok=True, ignore = shutil.ignore_patterns('*.o', '*.lo', '*.c', '*.h'))

    rm_empty_folders(dst)

if __name__ == "__main__":
   main(sys.argv[1:])