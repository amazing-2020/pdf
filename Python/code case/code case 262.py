import math as m
import matplotlib.pyplot as plt

x = []
y = []
for a in range(1, 11):
    for b in range(0, 360):
        x.append(a*(m.cos(m.pi*(b/100))))
        y.append(a*(m.sin(m.pi*(b/100))))
plt.scatter(x, y, s=30)
plt.axis([-11, 11, -11, 11])
plt.axis('equal')
plt.show()
