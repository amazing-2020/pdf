def read(filename):
    f = open('code case 288.py', 'r+')
    a = f.readlines()
    return a


s = list(''.join(read('code case 286.py')+read('code case 287.py')))
s.sort()
s1 = ''.join(s)
t = open('code_case_288.txt', 'w+')
t.writelines(s1)
t.close()
