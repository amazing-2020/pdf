import random


def number():
    return int(input('Enter a number: '))


i = 0
a = random.randint(-10, 100)
while True:
    i += 1
    b = number()
    if a > b:
        print('Number too small: ')
    elif a < b:
        print('Number too big: ')
    else:
        print('After %d times you succeed get %d' % (i, a))
        break
