def linearsearch(lis):
    num = int(input('Number:\t'))
    counter = 0
    null = 0

    for i in lis:
        if i == num:
            print("Find element {} in index {}.".format(i, counter))
        else:
            null += 1
        counter += 1
    if null == counter:
        print("Don't find it")


lis = [1, 2, 5, 7, 8, 34, 567, -1, 0, -1, -3, -9, 0]
linearsearch(lis)
