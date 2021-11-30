MAXINUM = lambda x, y: (x > y) * x + (x < y) * y
MININUM = lambda x, y: (x < y) * x + (x < y) * y

if __name__ == '__main__':
    a = 10
    b = 20
    print("The larger one is %d" % MAXINUM(a, b))
    print("The lower one is %d" % MININUM(a, b))
