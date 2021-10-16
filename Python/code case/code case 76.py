def test():
    try:
        raise KeyboardInterrupt
    finally:
        print("Goodbye, world")


def divide(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        print('divided bt zero')
    else:
        print('result is', result)
    finally:
        print('executing finally clause')


# test()
divide(2, 1)
divide(2, 0)
divide('2', '1')
