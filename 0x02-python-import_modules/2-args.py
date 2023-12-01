#!/usr/bin/python3

if __name__ == "__main__":
    import sys
    len_argv = len(sys.argv[0:])
    print("{} argument".format(len_argv-1))
    for x in range(len_argv):
        if x == 0:
            continue
        print("{}: {}".format(x, sys.argv[x]))
