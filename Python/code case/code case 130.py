def countX(lst, x):
    count = 0
    for ele in lst:
        if (ele == x):
            count += 1
    return count


def countX2(lst, x):
    return lst.count(x)


lst = [1, 21, 2, 12, 21, 21, 21, 21, 1, 1, 21, 545, 44, 45, 78, 9, 89, 89, 8]
x = 89
print(countX(lst, x))
print(countX2(lst, x))
