def SQ(x):
    return x**2


print("Enter a num bigger than 50: ")
again = 1
while again:
    num = int(input("Enter a num: "))
    print("The result: %d" % (SQ(num)))
    if SQ(num) >= 50:
        again = True
    else:
        again = False
