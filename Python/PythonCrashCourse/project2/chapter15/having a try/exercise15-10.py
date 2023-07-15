import matplotlib.pyplot as plt
import plotly.express as px
import numpy as np
import os
import sys

rw_lib_dir = os.path.dirname(os.path.dirname(__file__))
sys.path.append(rw_lib_dir)
from die import Die
from random_walk import RandomWalk


def draw_die():
    die_1 = Die(6)
    die_2 = Die(6)

    results = [die_1.roll() + die_2.roll() for roll_num in range(1000)]

    max_result = die_1.num_sides + die_2.num_sides
    poss_results = range(2, max_result + 1)
    frequencies = [results.count(value) for value in poss_results]
    fig, ax = plt.subplots(figsize=(10, 6), dpi=100)

    plt.bar(poss_results, frequencies, color='maroon', width=0.4)
    plt.xlabel("Sum of Two Die")
    plt.ylabel("The Count of The Sum")
    plt.title("Results of Rolling Two D6 1,000 Times")
    plt.tick_params(labelsize=14)
    # draw the (x,y) value for each rectangle
    for i in range(len(poss_results)):
        plt.text(poss_results[i], frequencies[i], str(poss_results[i]) + ", " + str(frequencies[i]), ha='center',
                 va='bottom')
    # draw the (x,y) value for each rectangle
    # for i in range(len(poss_results)):
    #    plt.annotate(f"({poss_results[i]}, {frequencies[i]})", xy=(poss_results[i], frequencies[i]),
    #    xytext=(poss_results[i], frequencies[i] + 5), ha='center', va='bottom', fontsize=1#0)

    # draw the x value under the X-axis
    plt.xticks(poss_results)
    plt.show()


def draw_random_walk():
    rw = RandomWalk(5_000)
    rw.fill_walk()

    fig = px.scatter(x=rw.x_values,
                     y=rw.y_values,
                     color=np.arange(5_000),
                     color_continuous_scale='aggrnyl',
                     opacity=0.8,
                     width=1440,
                     height=800,
                     )
    # set the size for the normal point
    fig.update_traces(marker=dict(size=3))
    # set the start and the end point
    fig.add_trace(px.scatter(x=[rw.x_values[0], rw.x_values[-1]],
                             y=[rw.y_values[0], rw.y_values[-1]],
                             color=['Start', 'End'],
                             size=[10, 10],
                             opacity=1).data[0])
    fig.add_trace(px.scatter(x=[rw.x_values[0], rw.x_values[-1]],
                             y=[rw.y_values[0], rw.y_values[-1]],
                             color=['Start', 'End'],
                             size=[10, 10],
                             opacity=1).data[1])

    fig.show()
    # the color bar conflict with two point button, can't solve

draw_die()
draw_random_walk()
