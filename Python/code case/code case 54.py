basket = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}
print(basket)
print('orange' in basket)
print('crabgrass' in basket)

a = set('asdfghjklasdf')
b = set('asdqwezcfgh')
print(a)
print(b)
print(a - b)
print(a | b)
print(a & b)
print(a ^ b)
print("{}" .format([x for x in a if x not in 'asd']))
