import os
import sys
from random import choice
rw_lib_dir = os.path.dirname(os.path.dirname(__file__))
sys.path.append(rw_lib_dir)

import matplotlib.pyplot as plt

from random_walk import RandomWalk


class RandomWalk2(RandomWalk):
    def fill_walk(self):
        while len(self.x_values) < self.num_points:
            x_choice = choice([-1, 1, 0.5, -0.5])
            x_distance = choice([0, 1, 2, 3, 4, 5, 6, 7, 8])
            x_step = x_choice * x_distance

            y_choice = choice([-1, 1])
            y_distance = choice([0, 1, 2, 3, 4])
            y_step = y_choice * y_distance

            if x_step == 0 and y_step == 0:
                continue

            x = self.x_values[-1] + x_step
            y = self.y_values[-1] + y_step

            self.x_values.append(x)
            self.y_values.append(y)


while True:

    rw = RandomWalk2(50_000)
    rw.fill_walk()

    plt.style.use('classic')
    fig, ax = plt.subplots(figsize=(19, 10))
    point_numbers = range(rw.num_points)
    ax.scatter(rw.x_values, rw.y_values, c=point_numbers, cmap=plt.cm.Greens,
               edgecolors='None', s=2)
    # start point and the end point
    ax.scatter(0, 0, c='purple', edgecolors='None', s=100)
    ax.scatter(rw.x_values[-1], rw.y_values[-1], c='red',
               edgecolors='None', s=100)
    # x-axis and y-axis set the same step
    ax.set_aspect('equal')

    ax.get_xaxis().set_visible(False)
    ax.get_yaxis().set_visible(False)

    plt.show()

    keep_running = input("Make another walk? (y/n): ")
    if keep_running == 'n':
        break
