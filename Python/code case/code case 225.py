def age(n):
    if n == 1:
        c = 10
    else:
        c = age(n-1) + 2
    return c


print(age(5))


def age2(n):
    return 10 if not n-1 else age2(n-1)+2


print(age2(5))
