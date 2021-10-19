x = input("Enter x value: ")
y = input("Input y value: ")
temp = x
x = y
y = temp
print('X = {}'.format(x))
print('y = {}'.format(y))

x, y = y, x
print('x = {}'.format(x))
print('y = {}'.format(y))
