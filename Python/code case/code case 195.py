import re

line = "Cats are smarter than dogs"

match_obj = re.match(r'dogs', line, re.M | re.I)
if match_obj:
    print("match --> match_obj.group():", match_obj.group())
else:
    print("No, match!")

match_obj = re.search(r'dogs', line, re.M | re.I)
if match_obj:
    print("match --> match_obj.group():", match_obj.group())
else:
    print("No, match!")
