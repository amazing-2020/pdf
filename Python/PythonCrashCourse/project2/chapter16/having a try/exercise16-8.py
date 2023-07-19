from pathlib import Path
import json

import plotly.express as px
import pandas as pd

path = Path('1.0_month.geojson')
contents = path.read_text()
all_eq_data = json.loads(contents)

all_eq_features = all_eq_data['features']

mags = [eq_dict['properties']['mag'] for eq_dict in all_eq_features]
titles = [eq_dict['properties']['title'] for eq_dict in all_eq_features]
lons = [eq_dict['geometry']['coordinates'][0] for eq_dict in all_eq_features]
lats = [eq_dict['geometry']['coordinates'][1] for eq_dict in all_eq_features]

data = pd.DataFrame(
    data=zip(lons, lats, titles, mags), columns=['经度', '纬度', '位置', '震级']
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
    size='震级',
    size_max=10,
    title='全球地震散点图',
    color='震级',
    hover_name='位置'
)

fig.show()
