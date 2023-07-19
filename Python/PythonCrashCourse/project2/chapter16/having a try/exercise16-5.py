from pathlib import Path
import csv
from datetime import datetime

import matplotlib.pyplot as plt

src_file = 'data_weather_UK.csv'
dst_file = 'UKE00156884_HIGH_AND_LOW.csv'


def create_file(location):
    src = Path(src_file)
    _reader = src.read_text().splitlines()
    _head_now = csv.reader(_reader)
    data = [next(_head_now)]

    for _line in _head_now:
        if _line[0] == location:
            data.append(_line)

    with open(dst_file, "w", newline='') as file:
        writer = csv.writer(file, quoting=csv.QUOTE_MINIMAL)
        writer.writerows(data)


destination = 'UKE00156884'  # which destination to get
create_file(destination)
path = Path(dst_file)
lines = path.read_text().splitlines()

reader = csv.reader(lines)
head_now = next(reader)

date, highs, lows = [], [], []
for row in reader:
    current_date = datetime.strptime(row[2], "%Y-%m-%d")
    try:
        high = float(row[4])
        low = float(row[5])
    except ValueError:
        print(row[4], "or", row[5], "is not valid")
    else:
        highs.append(high)
        lows.append(low)
        date.append(current_date)

plt.style.use('seaborn-v0_8')
plt.rcParams['font.family'] = 'Microsoft YaHei'
fig, ax = plt.subplots()
ax.plot(date, highs, color='red', alpha=0.5)
ax.plot(date, lows, color='blue', alpha=0.5)
ax.fill_between(date, highs, lows, color='blue', alpha=0.1)
title = "Daily High and Low Temperatures 2023.1-4\nWISLEY, UK"
ax.set_title(title, fontsize=24)
ax.set_xlabel('', fontsize=16)
fig.autofmt_xdate()
ax.set_ylabel("Temperature (\u2103)", fontsize=16)
ax.tick_params(labelsize=16)
plt.show()
