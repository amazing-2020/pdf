import sys

for arg in sys.argv[1:]:
    try:
        f = open(arg, 'r')
    except IOError:
        print('cannot open', arg)
    else:
        print(arg, 'has', len(f.readlines()), 'lines')
        f.close()
try:
    x = 1/0
except ZeroDivisionError as err:
    print('Handing run-time error', err)
