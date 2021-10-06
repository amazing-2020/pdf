while True:
    number = input('Please enter a number(enter q to quit)')
    if number in ['q', 'Q']:
        break
    elif not number.isdigit():
        print('Errors!!')
        continue
    else:
        number = int(number)
        print("decimal-->hexadecimal: %d-->0x%x" % (number, number))
        print("decimal-->octal: %d-->0%o" % (number, number))
        print("decimal-->octal: %d-->" % number, bin(number))
