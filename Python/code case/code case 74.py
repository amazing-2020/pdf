def raise1():
    x = 10
    if x > 5:
        raise Exception("x shouldn't bigger than 5. x = {}".format(x))


# 只能运行一个raise，此文件


def raise2():
    try:
        raise NameError('HiHere')
    except NameError:
        print('An exception flew by!')
        raise


if __name__ == '__main__':
    n = int(input("Please enter 1 or 2: "))
    if n == 1:
        raise1()
    elif n == 2:
        raise2()
    else:
        print("Errors")
