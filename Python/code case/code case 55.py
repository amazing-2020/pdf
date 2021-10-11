tel = {'jack': '0816', 'mike': '028'}
tel['joe'] = 4127
print(tel)
print(tel['jack'])
tel['irv'] = '+12'
print(list(tel.keys()))
print(sorted(tel.keys()))
print('joe' in tel)
print('jack' not in tel)

print(dict([('space', 4139), ('guido', 4127), ('jack', 4098)]))

print({x: x**2 for x in (2, 4, 6)})
print(dict(sape=111, guido=222, jack=333))
