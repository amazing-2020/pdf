def check(string, substr):
    if string.find(substr) == -1:
        print('Not exist')
    else:
        print('Exist')


string = 'www.baidu.com'
substr = 'baidu'
check(string, substr)
