from functools import reduce


def mutiplyList(mylist):
    result = 1
    for x in mylist:
        result *= x
    return result


list1 = [1, 2, 3]
list2 = [4, 5, 6]
print(mutiplyList(list1))
print(mutiplyList(list2))

sum = reduce(lambda x, y: x*y, list1) + reduce(lambda x, y: x*y, list2)
print(sum)
