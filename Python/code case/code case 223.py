import math


def jc(m):
    l = []
    for n in range(1, m+1):
        l.append(math.factorial(n))
        if m > 1:
            print("{}!+".format(n), end="")
            m -= 1
        else:
            print("{}!=".format(n), end="")
    print(sum(l))


if __name__ == '__main__':
    jc(20)
