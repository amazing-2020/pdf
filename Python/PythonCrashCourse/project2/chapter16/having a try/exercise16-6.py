from pathlib import Path
import json

path = Path('../eq_data/eq_data_1_day_m1.geojson')
contents = path.read_text()
all_eq_data = json.loads(contents)

all_eq_features = all_eq_data['features']

mags = [eq_dict['properties']['mag'] for eq_dict in all_eq_features]
titles = [eq_dict['properties']['title'] for eq_dict in all_eq_features]
lons = [eq_dict['geometry']['coordinates'][0] for eq_dict in all_eq_features]
lats = [eq_dict['geometry']['coordinates'][1] for eq_dict in all_eq_features]

print(mags[:10])
print(titles[:2])
print(lons[:5])
print(lats[:5])
