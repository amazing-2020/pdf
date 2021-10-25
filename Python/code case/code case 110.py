def mylcm(a, b):
    temp1 = a
    temp2 = b
    if a == 0:
        a, b = b, a
    while b != 0:
        a, b = b, a % b
        print(b)
    return int(temp1 * temp2 / a)


print(mylcm(12, 78))
