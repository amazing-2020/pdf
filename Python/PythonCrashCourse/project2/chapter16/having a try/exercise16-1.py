from pathlib import Path
import csv
from datetime import datetime
import matplotlib.pyplot as plt

path = Path('../weather_data/sitka_weather_2021_full.csv')
lines = path.read_text().splitlines()

reader = csv.reader(lines)
head_now = next(reader)

prcp, date = [], []

for line in reader:
    current_date = datetime.strptime(line[2], "%Y-%m-%d")
    rain_per_day = float(line[5]) * 25.4
    date.append(current_date)
    prcp.append(rain_per_day)

plt.style.use("seaborn-v0_8")
fig, ax = plt.subplots(figsize=(19, 10))

ax.plot(date, prcp, color='red', alpha=0.5)
ax.set_title("Precipitation index", fontsize=24)
ax.set_xlabel("")
fig.autofmt_xdate()
ax.set_ylabel("Precipitation mm", fontsize=14)
ax.tick_params(labelsize=16)

plt.show()
