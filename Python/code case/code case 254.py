def shuru():
    a = input("Enter the value of a: ")
    b = input("Enter the value of b: ")
    return a, b


def change1(a, b):
    t = a
    a = b
    b = t
    print("After exchange: ", a, b)


def change2(a, b):
    a = a + b
    b = a - b
    a = a - b
    print("The second exchange: ", a, b)


def change3(a, b):
    la = len(a)
    a += b
    b = a[0:la]
    a = a[la:]
    print("The third exchange: ", a, b)


a, b = shuru()
change1(a, b)
change2(int(a), int(b))
change3(str(a), str(b))
