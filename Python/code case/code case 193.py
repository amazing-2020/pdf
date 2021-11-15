import re

print(re.match('www', 'www.baidu.com').span())
print(re.match('com', 'www.baidu.com'))

line = 'Cats are smarter than dogs'
match_obj = re.match(r'(.*) are (.*?) .*', line, re.M | re.I)
if match_obj:
    print('match_obj.group():', match_obj.group())
    print('match_obj.group(1):', match_obj.group(1))
    print('match_obj.group(2):', match_obj.group(2))
else:
    print("No, match!")
