def get():
    m = 8
    n = 2
    l = ['s', 1, 2]
    k = {1: 1, 2: 2}
    p = {'2', 's', 't'}
    while True:
        m += 1
        yield m
        yield m, n, l, k, p


it = get()
print(next(it))
print(next(it))
print(next(it))
print(type(next(it)))
print(type(next(it)))
