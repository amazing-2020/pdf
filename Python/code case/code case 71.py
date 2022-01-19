import sys

while True:
    try:
        x = int(input("Please input a number: "))
        break
    except ValueError:
        print("You didn't enter a number!")
    finally:
        break
try:
    f = open("./code case 71.py", 'r')
    s = f.readline()
    i = int(s.strip())
except OSError as err:
    print("OS error: {0}".format(err))
except ValueError:
    print('Could not convert the data to an integer.')
except:
    print('Unexpected errors: ', sys.exc_info()[0])
    raise
