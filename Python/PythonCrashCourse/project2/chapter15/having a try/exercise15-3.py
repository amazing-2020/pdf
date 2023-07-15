import os
import sys

rw_lib_dir = os.path.dirname(os.path.dirname(__file__))
sys.path.append(rw_lib_dir)

import matplotlib.pyplot as plt

from random_walk import RandomWalk

while True:

    rw = RandonWalk(5_000)
    rw.fill_walk()

    plt.style.use('classic')
    fig, ax = plt.subplots(figsize=(19, 10))
    point_numbers = range(rw.num_points)
    ax.plot(rw.x_values, rw.y_values, c='red', linewidth=1)

    # start point and the end point
    ax.scatter(0, 0, c='blue', edgecolors='None', s=100)
    ax.scatter(rw.x_values[-1], rw.y_values[-1], c='green',
               edgecolors='None', s=100)
    # x-axis and y-axis set the same step
    ax.set_aspect('equal')

    ax.get_xaxis().set_visible(False)
    ax.get_yaxis().set_visible(False)

    plt.show()

    keep_running = input("Make another walk? (y/n): ")
    if keep_running == 'n':
        break
