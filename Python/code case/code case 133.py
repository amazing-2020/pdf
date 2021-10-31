list1 = [23, 32324, 432, 4, 32, 4, 23, 4, 324, 23, 4, 234]
list1.sort()
print('The smallest element is: ', *list1[:1])
print(list1)
print('The smallest element is: ', min(list1))

print('The biggest element is: ', list1[-1])
print('The biggest element is: ', max(list1))
