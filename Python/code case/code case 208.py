def reduce_num(n):
    print("{} = ".format(n), end=" ")
    if not isinstance(n, int) or n <= 0:
        print("Enter a right number")
        exit(0)
    elif n in [1]:
        print("{".format(n))
    while n not in [1]:
        for index in range(2, n+1):
            if n%index == 0:
                n //= index
                if n == 1:
                    print(index)
                else:
                    print("{} *".format(index), end=" ")
                break


reduce_num(90)
reduce_num(12145)
