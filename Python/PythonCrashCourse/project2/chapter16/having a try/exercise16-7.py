from pathlib import Path
import json

path = Path('../eq_data/eq_data_1_day_m1.geojson')
contents = path.read_text()
all_eq_data = json.loads(contents)

meta_data = all_eq_data['metadata']
title = meta_data['title']
print(title)
