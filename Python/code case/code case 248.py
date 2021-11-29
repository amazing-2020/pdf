import numpy as np

X = [[12, 7, 3],
     [4, 5, 6],
     [7, 8, 9]]

Y = [[5, 8, 1],
     [6, 7, 3],
     [4, 5, 9]]

Z = np.zeros(shape=(len(X), len(X[0])))
print(Z)
for i in range(0, len(X)):
    for j in range(0, len(X[0])):
        Z[i][j] = X[i][j] + Y[i][j]
print(Z)
