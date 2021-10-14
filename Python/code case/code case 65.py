import pickle

f = open('./code case 65.py', 'r')
# 0123456789
print(f.seek(6))
print(f.read(5))
print(f.seek(0, 1))
print(f.read(1))

datal = {
    'a': [1, 2.0, 3, 4+6j],
    'b': ('string', u'Unicode string'),
    'c': None
}
selfref_list = [1, 2, 3]
selfref_list.append(selfref_list)
output = open('data.pki', 'wb')
pickle.dump(datal, output)
pickle.dump(selfref_list, output, -1)
output.close()
