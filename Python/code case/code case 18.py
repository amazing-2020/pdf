import time

n = int(input("please enter a number"))
a = 0
b = 1
start = time.time()


def f(n1, a1, b1):
    if n1 == 0:
        return a
    return f(n1 - 1, b1, a1 + b1)


print(f(n, a, b))
end = time.time()
print("Time %.2fs" % (end - start))
