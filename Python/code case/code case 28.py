count = 0
while count < 5:
    print(count, 'less than 5')
    count += 1
else:
    print(count, '= count')
sites = ['baidu', 'google', 'bing', 'taobao']
for site in sites:
    if site == 'baidu':
        print('baidu.com')
        break
    else:
        print('No loop data')
print('Loop end')
