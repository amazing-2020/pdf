x = int(input('Enter a number:\n'))
a = x // 10000
b = x % 10000 // 1000
c = x % 1000 // 100
d = x % 100 // 10
e = x % 10

if a != 0:
    print(e, d, c, b, a)
elif b != 0:
    print(e, d, c, b)
elif c != 0:
    print(e, d, c)
elif d != 0:
    print(e, d)
else:
    print(e)
