import datetime
import time

now = int(time.time())
timeArray1 = time.localtime(now)
otherStyleTime1 = time.strftime("%Y-%m-%d %H:%M:%S", timeArray1)
print(otherStyleTime1)

now2 = datetime.datetime.now()
otherStyleTime2 = now2.strftime("%Y-%m-%d %H:%M:%S")
print(otherStyleTime2)

timeStamp3 = 1555555555
timeArray3 = time.localtime(timeStamp3)
otherStyleTime3 = time.strftime("%Y-%m-%d %H:%M:%S", timeArray3)
print(otherStyleTime3)
