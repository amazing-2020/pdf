import re

phone = "2004-959-559 # 电话号码"
num = re.sub(r'#.*$', "", phone)
print("The phone number is:", num)

num = re.sub(r'\D', "", phone)
print("The phone number is:", num)
