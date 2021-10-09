sum = lambda arg1, arg2: arg1+arg2

print("sum = ", sum(10, 20))
print("sum = ", sum(20, 20))


def f(a, b, /, c, d, *, e, h):
    print(a, b, c, d, e, h)


print(f(1, 2, 3, d=4, e=5, h=6))
