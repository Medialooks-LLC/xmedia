#!/usr/bin/env python3

import argparse
import logging
from os.path import exists, isfile, isdir
import os
from shutil import copy2


def create_parser():
    parser = argparse.ArgumentParser("Copy dependencies library to output binary directory")
    parser.add_argument("-i", action="store", dest="deps_file", required=True, help="Path to file with list of dependencies")
    parser.add_argument("-o", action="store", dest="out_dir", required=True, help="Output directory to copy dependencies")
    return parser


def process_args(parser:argparse.ArgumentParser):
    args = parser.parse_args()
    if exists(args.deps_file) and isfile(args.deps_file):
        deps_file = args.deps_file
        logging.info("The file with dependencies is %s", deps_file)
    else:
        logging.error("The path to the file with dependencies is incorrect: %s", args.deps_file)
        exit(1)

    if not exists(args.out_dir):
        logging.warning("The target directory doesn't exist: %s. Trying to create it.", args.out_dir)
        os.makedirs(args.out_dir)

    out_dir = args.out_dir
    logging.info("The target directory is %s", out_dir)
    
    return deps_file, out_dir


def copy_deps(deps_file:str, out_dir:str):
    logging.info("Copy files from %s file list to %s directory", deps_file, out_dir)
    with open(deps_file, 'r') as f:
        files = [line.strip() for line in f]

    for file in files:
        copy2(file, out_dir)
    
    logging.info("Copied %d files", len(files))


def main():
    logging.basicConfig(level=logging.INFO, format="[copy deps] %(message)s")
    parser = create_parser()
    deps_file, out_dir = process_args(parser)
    copy_deps(deps_file, out_dir)


if __name__ == "__main__":
    main()
