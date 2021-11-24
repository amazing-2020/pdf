L = [1, 2, 3, 4, 5]
s1 = ','.join(str(n) for n in L)
print(L)
print(s1)

s2 = repr(L)[1:-1]
print(s2)

k = 1
for i in L:
    print(i, end=("" if k == len(L) else ','))
    k += 1
print()

o = ''
for i in L:
    o += str(i) + ','
print(o[0:-1])
