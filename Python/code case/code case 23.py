# 二次方程式 ax**2 + bx + c = 0
import cmath
import math
import unicodedata


def is_number(s):
    try:
        float(s)
        return True
    except ValueError:
        pass
    try:
        unicodedata.digit(s)
        return True
    except (TypeError, ValueError):
        pass
    return False


a = input('input a:')
b = input('input b:')
c = input('input c:')

if is_number(a) and is_number(b) and is_number(c):
    a = float(a)
    b = float(b)
    c = float(c)
    if a == 0 and b == 0:
        print('this is not an equation.')
    elif a == 0 and b != 0:
        x = -c / b
        print('is a linear equation, the result of x is: %.2f' % x)
    elif a != 0 and b == 0:
        d = -c / a
        if d >= 0:
            x = math.sqrt(d)
            print('is a linear equation, the result of x is: %.2f' % x)
        else:
            print('No result')
    elif a != 0 and b != 0:
        d = (b**2) - (4*a*c)
        if d >= 0:
            x1 = (-b - math.sqrt(d)) / (2 * a)
            x2 = (-b + math.sqrt(d)) / (2 * a)
            print('The result is %.2f and %.2f' % (x1, x2))
        else:
            x1 = (-b - cmath.sqrt(d)) / (2 * a)
            x2 = (-b + cmath.sqrt(d)) / (2 * a)
            print('The result is {0} and {1}' .format(x1, x2))
    else:
        print('errors')
else:
    print("Please enter a number")
