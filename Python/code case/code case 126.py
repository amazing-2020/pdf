def Reverse(lst):
    return [ele for ele in reversed(lst)]


def ReverseA(lst):
    lst.reverse()
    return lst


def ReverseB(lst):
    new_lst = lst[::-1]
    return new_lst


list = [10, 11, 12, 20, 13, 14]
print(Reverse(list))

print(list)

print(ReverseA(list))
print(ReverseB(list))
