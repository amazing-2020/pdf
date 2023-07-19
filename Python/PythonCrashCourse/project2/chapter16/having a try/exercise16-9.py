from pathlib import Path
import plotly.express as px
import pandas as pd
import csv

path = Path('world_fires_1_day.csv')
lines = path.read_text().splitlines()

contents = csv.reader(lines)
head = next(contents)

lons, lats, frps = [], [], []

for row in contents:
    lons.append(float(row[1]))
    lats.append(float(row[0]))
    frps.append(float(row[11]))

data = pd.DataFrame(
    data=zip(lons, lats, frps), columns=['经度', '纬度', '辐射功率']
)
data.head()

fig = px.scatter(
    data,
    x='经度',
    y='纬度',
    range_x=[-200, 200],
    range_y=[-90, 90],
    width=800,
    height=800,
    size='辐射功率',
    title='全球火灾散点图',
    color='辐射功率',
    color_continuous_scale=px.colors.sequential.Viridis
)

fig.show()
