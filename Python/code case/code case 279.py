def f8to10(num):
    print("8-  : ", num)
    l = str(num)
    length = len(l)
    sum = 0
    for i in range(length):
        sum += 8**i * int(l[length-1-i])
    print("10-  :", sum)


f8to10(122)
