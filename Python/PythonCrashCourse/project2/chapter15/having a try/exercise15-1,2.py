import matplotlib.pyplot as plt

input_values = range(1, 6)
cube_values = [x**3 for x in input_values]
print(cube_values)
plt.style.use('seaborn-v0_8')
fig, ax = plt.subplots()
ax.plot(input_values, cube_values, color='red', linewidth=3)

ax.set_title("Cube Numbers", fontsize=24)
ax.set_xlabel("Value", fontsize=14)
ax.set_ylabel("Cube of Value", fontsize=14)

ax.tick_params(labelsize=14)
ax.axis([0, 6, 0, 150])
ax.ticklabel_format(style='plain')

plt.show()


x_values = range(1, 1001)
y_values = [x**3 for x in x_values]

fig, ax = plt.subplots()
ax.scatter(x_values, y_values, c=y_values, cmap=plt.cm.YlOrRd, s=5)

ax.set_title("Cube Numbers", fontsize=24)
ax.set_xlabel("Value", fontsize=14)
ax.set_ylabel("Cube of Value", fontsize=14)

ax.tick_params(labelsize=14)
ax.axis([0, 1100, 0, 1_100_000_000])

plt.show()
