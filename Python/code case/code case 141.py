test_dict = {'Ronoob': 1, 'Google': 2, 'Baidu': 3, 'Bing': 4}
print('Before delete: ' + str(test_dict))
del test_dict['Baidu']
print('After delete: ' + str(test_dict))

test_dict = {'GNU': 1, 'Google': 2, 'Baidu': 3, 'Bing': 4}
print('Before delete: ' + str(test_dict))
removed_value = test_dict.pop('Google')
print('After delete: ' + str(test_dict))
print('\r')
removed_value2 = test_dict.pop('Taobao', 'No such key!!!')
print('After delete: ' + str(test_dict))
print('The deleted value: ' + str(removed_value2))

test_dict = {'GNU': 1, 'Google': 2, 'Baidu': 3, "Bing": 4}
print('Before delete: ' + str(test_dict))
new_dict = {key: val for key, val in test_dict.items() if key != 'Bing'}
print('After delete: ' + str(new_dict))
