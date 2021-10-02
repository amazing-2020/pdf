n = int(input("Please enter a number: "))
dic = {0: 0, 1: 1}


def fab(n1):
    if n1 in dic:
        return dic[n1]
    else:
        temp = fab(n1 - 1) + fab(n1 - 2)
        dic[n1] = temp
        return temp


for i in range(n):
    print(fab(i + 1), end=" ")
