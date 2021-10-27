import time
print("Press 'enter' key to start, press Ctrl + C to stop timing")
while True:
    input("")
    starttime = time.time()
    print('Start')
    try:
        while True:
            print("Timing:", round(time.time() - starttime, 0), 'seconds', end='\r')
            time.sleep(1)
    except KeyboardInterrupt:
        print('End')
        endtime = time.time()
        print("Total time is:", round(endtime - starttime, 2), 'secs')
        break
