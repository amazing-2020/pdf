import random
t1 = "game start"
t2 = "game end"
print(t1.center(50, "*"))
money = int(input('Input money number: '))
print("Your current balance is: %d $" % money)
while True:
    data1 = []
    for i in range(6):
        n = random.choice([0, 1])
        data1.append(n)
    if money < 2:
        print("Your current balance is not enough, please parse")
        m = input('Enter the value: ')
        if int(m) == 0:
            break
        else:
            money += int(m)
    while 1:
        j = int(input('Enter the number of the lottery '))
        if money - j*2 < 0:
            print("Insufficient balance after purchase, please re-enter")
        else:
            money = money - j*2
            print('Your balance is %d now' % money)
            break
    n2 = input("Enter 6 numbers, they 0 or 1: ")
    print(str(data1))
    f = []
    for x in n2:
        f.append(x)
    f1 = str(f)
    f2 = f1.split("'")
    f3 = ''.join(f2)
    print('The data you guess is:', f3)
    if f3 == str(data1):
        money += j*100
        print("{0} is the winning number, your balance is {1} now".format(data1, money))
    else:
        print("Please try again,the winning number is: ", data1)
    if input("if you want to end, please enter no ") == "no":
        break
print(t2.center(50, "*"))
print("Your current balance is: %d $" % money)
