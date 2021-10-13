import math

print('The value of the constant PI is approximately: {}'.format(math.pi))
print('The value of the constant PI is approximately: {!r}'.format(math.pi))
print('The value of the constant PI is approximately: {0:.3f}'.format(math.pi))

table = {'Google': 1, 'Baidu': 2, 'Bing': 3}
for name, number in table.items():
    print('{0:10} ==> {1:10d}'.format(name, number))
print('Baidu: {0[Baidu]:d}; Google: {0[Google]:d}; Bing: {0[Bing]:d}'.format(table))
print('Baidu: {Baidu:d}; Google: {Google:d}; Bing: {Bing:d}'.format(**table))
