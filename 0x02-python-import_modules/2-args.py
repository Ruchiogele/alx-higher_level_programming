#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    argv = len(sys.argv)
    if argv == 1:
        print("{} arguments.".format(argv - 1))
    elif argv == 2:
        print("{} argument:".format(argv - 1))
    else:
        print("{} arguments:".format(argv - 1))

    for i in range(1, argv):
        print("{}: {}".format(i, sys.argv[i]))
