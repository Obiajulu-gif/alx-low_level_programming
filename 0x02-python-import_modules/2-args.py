#!/usr/bin/python3
import sys


def main():
    argc = len(sys.argv)
    calc = argc - 1

    if argc < 2:
        print("{} arguments.".format(calc))
    else:
        if calc == 1:
            print("{} argument:".format(calc))
            print("1: {}".format(sys.argv[1]))
        else:
            print("{} arguments:".format(calc))
            for i, arg in enumerate(sys.argv[1:], start=1):
                print("{}: {}".format(i, arg))


if __name__ == "__main__":
    main()
