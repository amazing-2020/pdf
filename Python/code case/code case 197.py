import re


def double(marched):
    value = int(marched.group('value'))
    return str(value * 2)


s = 'A23G4HFD567'
print(re.sub('(?P<value>\d+)', double, s))
