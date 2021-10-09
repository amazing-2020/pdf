def change(a):
    print(id(a))
    a = 10
    print(id(a))


a = 1
print(id(a))
change(a)


def changename(mylist):
    mylist.append([1, 2, 3, 4])
    print("Value in the function:", mylist)
    return


mylist = [10, 20, 30]
changename(mylist)
print("Value out of the function: ", mylist)
