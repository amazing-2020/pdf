import plotly.express as px
import os
import sys

rw_lib_dir = os.path.dirname(os.path.dirname(__file__))
sys.path.append(rw_lib_dir)
from die import Die


die_1 = Die(8)
die_2 = Die(8)

results = []
# it is hard when the times up to 10_000_000
for roll_num in range(10_000_000):
    result = die_1.roll() + die_2.roll()
    results.append(result)

frequencies = []
max_result = die_1.num_sides + die_2.num_sides
poss_results = range(2, max_result+1)
for value in poss_results:
    frequency = results.count(value)
    frequencies.append(frequency)

title = "Results of Rolling Two D8 1,000 Times"
labels = {"x": "Result", "y": "Frequency of Result"}
fig = px.bar(x=poss_results, y=frequencies, title=title, labels=labels)

fig.update_layout(xaxis_dtick=1)

fig.show()
