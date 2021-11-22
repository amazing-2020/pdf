a = 2
b = 1
lst = []
for i in range(20):
    lst.append(str(a) + '/' + str(b))
    a, b = a+b, a
print("{0} = {1}".format(eval('+'.join(lst)), '+'.join(lst)))
