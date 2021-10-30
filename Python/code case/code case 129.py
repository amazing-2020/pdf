BAIDU = [0, 1, 2, 3, 4]
print('Before clear:', BAIDU)

BAIDU.clear()
print('After clear:', BAIDU)


def clone_baidu(li1):
    li_copy = li1[:]
    return li_copy


def clone_baidu2(li2):
    li_copy = []
    li_copy.extend(li2)
    return li_copy


def clone_baidu3(li3):
    li_copy = list(li3)
    return li_copy


li1 = [4, 8, 2, 10, 15, 18]
li2 = clone_baidu(li1)
print('Primary list: ', li1, 'After copy: ', li2)

li2 = clone_baidu2(li1)
print('Primary list: ', li1, 'After copy: ', li2)

li2 = clone_baidu3(li1)
print('Primary list: ', li1, 'After copy: ', li2)
