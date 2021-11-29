X = [[12,7,3],
    [4,5,6],
    [7,8,9]]

Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]

Z = []
for i in range(3):
    zz = map(lambda a, b: a+b, X[i], Y[i])
    Z.append(zz)
print(Z)  # python2
