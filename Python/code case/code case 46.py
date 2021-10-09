def printinfo(arg1, *vartuple):
    print('output: ')
    print(arg1)
    for var in vartuple:
        print(var)
    return


printinfo(10)
printinfo(70, 30, 51)


def printinfo2(arg1, **vardict):
    print('output: ')
    print(arg1)
    print(vardict)


printinfo2(1, a=2, b=3)


def add(a, b, *, c):
    return a+b+c


print(add(1, 2, c=3))
