def myyield1():
    a, i = 'yield', 0
    while True:
        print('before #%d' % i, end=', ')
        yield a, i
        print('after #%d' % i, end=', ')
        i += 1
def myyield2():
    a, i = 'yield_A', 0
    b, i = 'yield_B', 0
    while True:
        print('before #%d' % i, end=', ')
        yield a, i
        yield b, i
        print('after #%d' % i, end=', ')
        i += 1


it1 = iter(myyield1())
it2 = iter(myyield2())

for i in range(10):
    print("next #%d" % i, end='; ')
    print(next(it1))
print('\n')
for i in range(10):
    print('next #%d' % i, end='; ')
    print(next(it2))
