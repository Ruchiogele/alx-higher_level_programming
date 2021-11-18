#!/usr/bin/python3
if __name__ == '__main__':
    import sys
    from calculator_1 import add, sub, mul, div
    if len(sys.argv) == 4:
        num_args = [('+', add), ('-', sub), ('*', mul), ('/', div)]
        for num_args in num_args:
            if sys.argv[2] == num_args[0]:
                a = int(sys.argv[1])
                b = int(sys.argv[3])
                print('{:d} {:s} {:d} = {:d}'.format(
                    a, num_args[0], b, num_args[1](a, b)
                    ))
                sys.exit()
        print('Unknown operator. Available operators: +, -, * and /')
        sys.exit(1)
    else:
        print('Usage: {:s} <a> <operator> <b>'.format(sys.argv[0]))
        sys.exit(1)
