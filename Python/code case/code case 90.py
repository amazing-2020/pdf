while True:
    try:
        num = int(input('Enter a integer: '))
    except ValueError:
        print("This isn't a integer!")
        continue
    if num % 2 == 0:
        print('Even')
    else:
        print('Odd')
    break
