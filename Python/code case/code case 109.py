def lcm(x, y):
    s = x * y
    while y: x, y = y, x % y
    print(x)
    return s // x


print(lcm(48, 72))
