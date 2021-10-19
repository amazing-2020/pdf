def temperature():
    temp = float(input("Enter the value:"))
    return temp


a = int(input('Please enter a value (1: F -> ℃ , 2: ℃  -> F): \n'))

while a != 1 and a != 2:
    a = int(input(' Errors! Please enter a value (1: F -> ℃ , 2: ℃  -> F): '))

if a == 1:
    tempe = temperature()
    celsius = (tempe - 32) / 1.8
    print('{} F = {} ℃'.format(tempe, celsius))
else:
    tempe = temperature()
    fahrenheit = (tempe * 1.8) + 32
    print('{} ℃ = {} F'.format(tempe, fahrenheit))
