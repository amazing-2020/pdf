def Merge1(dict1, dict2):
    return (dict2.update(dict1))


def Merge2(dict1, dict2):
    res = {**dict1, **dict2}
    return res


dict1 = {'a': 10, 'b': 8}
dict2 = {'d': 6, 'c': 4}
print(Merge1(dict1, dict2))
print(dict2)

dict11 = {'a': 10, 'b': 8}
dict22 = {'d': 6, 'c': 4}
dict3 = Merge2(dict11, dict22)
print(dict3)
