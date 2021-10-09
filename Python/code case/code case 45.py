def printme(str):
    print(str)
    return


def printinfo(name, age):
    print('name: ', name)
    print('age: ', age)
    return


def printinfo2(name, age=35):
    print('name: ', name)
    print('age: ', age)
    return


printme(str="google")
printinfo(age=20, name="google")
printinfo2(age=50, name='google')
print('===================')
printinfo2(name='google')
