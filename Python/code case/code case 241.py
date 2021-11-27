import re

stopword = ''
str = ''
num = []
result = 0
print("Enter a matrix, enter two \"enter\" to stop")
for line in iter(input, stopword):
    str = str + line + '\n'
row = len(re.findall(r'\n', str))
for x in re.finditer(r'\d+', str):
    num.append(int(x.group()))
i = 0
for j in range(row):
    result += num[i]
    i += row + 1
print("sum: ", result)
