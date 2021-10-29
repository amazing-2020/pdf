testlist = [1, 6, 3, 5, 3, 4]
testlist2 = [1, 6, 3, 5, 3, 4]

print("Try to find element '4'(using set() + in): ")

testlist = set(testlist)
if 4 in testlist:
    print('Exist')
print("Try to find element '4'(using set() + in): ")
if testlist2.count(4) > 0:
    print('Exist')
