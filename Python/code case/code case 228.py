s = str(input())


def fun(m):
    if len(m) == 1:
        return m[0]
    else:
        return (m[len(m) - 1] + fun(m[:(len(m) - 1)]))


if len(s) > 5:
    print("Out of range")
else:
    print("{0} items, reversed {1}".format(len(s), fun(s)))
