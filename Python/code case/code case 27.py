import random
x = random.choices(range(100))
y = random.choices(range(100))
if x > y:
    print('x:', x)
elif x < y:
    print('y:{}'.format(y))
else:
    print('x = y = {} {}'.format(x, y))
