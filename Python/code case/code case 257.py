if __name__ == '__main__':
    a = 0o77
    b = a | 3
    print("a | b is %d" % b)
    b |= 7
    print("a | b is %d" % b)
    a, b = 0o77, 0
    b = a ^ 3
    print("The a ^ 3 = %d" % b)
    b ^= 7
    print("The a ^ b = %d" % b)

