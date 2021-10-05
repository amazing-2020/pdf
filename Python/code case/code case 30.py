a = ['google', 'baidu', 'bing', 'taobao', 'telegram']
for i in range(len(a)):
    print(i, a[i])
print(list(range(5)))
for letter in 'baidu':
    if letter == 'i':
        break
    print('This letter is:', letter)
var = 10
while var > 0:
    print('The value of variable is:', var)
    var -= 1
    if var == 5:
        break
print('Good bye!!!')
for letter in 'baidu':
    if letter == 'i':
        continue
    print('This letter is:', letter)
