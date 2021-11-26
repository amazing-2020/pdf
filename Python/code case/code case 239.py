import random


def f(n, l):
    i = n
    if i == 1:
        return l
    else:
        for k in range(i-1):
            if l[k] > l[k+1]:
                l[k], l[k+1] = l[k+1], l[k]
        return f(i-1, l)


A = []
for i in range(10):
    A.append(random.randint(0, 100))
print(A)
print(f(len(A), A))
