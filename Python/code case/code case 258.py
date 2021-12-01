if __name__ == '__main__':
    a = int(input("input a number: \n"))
    b = a >> 4
    c = ~(~0 << 4)
    d = b & c
    print("%o\t%o" % (a, d))
