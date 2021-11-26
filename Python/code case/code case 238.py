import random

A = []
for i in range(10):
    A.append(random.randint(0, 100))
print(A)
x = A
for i, j in enumerate(x):
    T = x[i+1:]
    if T == []:
        break
    if x[i] > min(T):
        t = x.index(min(T))
        x[i], x[t] = x[t], x[i]
print(A)
