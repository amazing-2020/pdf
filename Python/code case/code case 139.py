lis = [{'name': 'Puma', 'age': '73'},
       {'name': 'Nike', 'age': '50'},
       {'name': 'Wiki', 'age': '26'},
       {'name': 'Chrome', 'age': '13'},
       {'name': 'Firefox', 'age': '23'},
       {'name': 'Samsung', 'age': '50'}]
print('The list is sorted in ascending order by age:')
print(sorted(lis, key=lambda i: i['age']))

print('\r')

print('The list is order by age and name:')
print(sorted(lis, key=lambda i: (i['age'], i['name'])))

print('\r')

print('The list is sorted in descending order by age:')
print(sorted(lis, key=lambda i: i['age'], reverse=True))
