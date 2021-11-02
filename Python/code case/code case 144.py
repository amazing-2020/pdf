import datetime
import time

threeDayAgo = (datetime.datetime.now() - datetime.timedelta(days=3))
timeStamp = int(time.mktime(threeDayAgo.timetuple()))
otherStyleTime = threeDayAgo.strftime('%Y-%m-%d %H:%M:%S')
print(otherStyleTime)

timeStamp = 1559502800
dateArray = datetime.datetime.utcfromtimestamp(timeStamp)
threeDayAgo = dateArray - datetime.timedelta(days=3)
print(threeDayAgo)
