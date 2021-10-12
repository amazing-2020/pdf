s = "Hello, Google"
print(str(s))
print(repr(s))
print(str(1/7))
x = 10 * 3.25
y = 200 * 200
print('The value of X: ', repr(x), ', the value of y: ', repr(y), '...')
hello = 'hello, google\n'
hellos = repr(hello)
print(hellos)
print(repr((x, y, ('Google', 'Bing'))))

for x in range(1, 11):
    print(repr(x).rjust(2), repr(x*x).rjust(3), end=' ')
    print(repr(x*x*x).rjust(4))
for x in range(1, 11):
    print('{0:2d} {1:3d} {2:4d}'.format(x, x*x, x*x*x))
