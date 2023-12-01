#!/usr/bin/python3
import sys

if __name__ == "__main__":
    len_argv = len(sys.argv[0:])
    result = 0
    for x in range(len_argv):
        if x == 0:
            continue
        result += int(sys.argv[x])
    else:
        print(result)
