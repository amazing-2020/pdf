from pathlib import Path
import csv
from datetime import datetime

import matplotlib.pyplot as plt


path = Path("../weather_data/sitka_weather_2021_simple.csv")
lines_s = path.read_text().splitlines()

reader = csv.reader(lines_s)
header_now = next(reader)

date, highs_s, lows_s = [], [], []

for row in reader:
    current_date = datetime.strptime(row[2], "%Y-%m-%d")
    high_s = int(row[4])
    low_s = int(row[5])
    date.append(current_date)
    highs_s.append(high_s)
    lows_s.append(low_s)

path = Path('../weather_data/death_valley_2021_simple.csv')
lines_d = path.read_text().splitlines()

reader = csv.reader(lines_d)
header_now = next(reader)

date, highs_d, lows_d = [], [], []

for row in reader:
    current_date = datetime.strptime(row[2], "%Y-%m-%d")
    try:
        high_d = int(row[3])
        low_d = int(row[4])
    except ValueError:
        print(f"Missing data for {current_date}")
    else:
        date.append(current_date)
        highs_d.append(high_d)
        lows_d.append(low_d)

plt.style.use('seaborn-v0_8')
fig, ax = plt.subplots()
ax.plot(date, highs_s, color='red', alpha=0.5)
ax.plot(date, lows_s, color='blue', alpha=0.5)
ax.fill_between(date, highs_s, lows_s, color='#19AAD1', alpha=0.1)
ax.plot(date, highs_d, color='green', alpha=0.5)
ax.plot(date, lows_d, color='yellow', alpha=0.5)
ax.fill_between(date, highs_d, lows_d, color='blue', alpha=0.1)
title = "Daily High and Low Temperatures, 2021\nDeath Valley and Sitka, CA"
ax.set_title(title, fontsize=24)
ax.set_xlabel('', fontsize=16)
fig.autofmt_xdate()
plt.ylim(0, 150)
ax.set_ylabel("Temperature (F)", fontsize=16)
ax.tick_params(labelsize=16)

plt.show()
