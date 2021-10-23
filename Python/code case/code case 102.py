def is_armstrong(n):
    s = sum(map(lambda x: eval(x) ** len(str(n)), str(n)))
    return s == n


B = []
for i in range(1000):
    if is_armstrong(i):
        B.append(i)

print(B)
