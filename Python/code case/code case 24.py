while True:
    print('Please enter the a, b and c:')
    try:
        a = float(input("Enter a number: "))
        b = float(input("Enter a number: "))
        c = float(input("Enter a number: "))
    except ValueError:
        print("Not number exist")
    else:
        if a+b > c and a+c > b and b+c > a:
            s = (a + b + c)/2
            area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
            print("The area of the triangle is: %0.2f " % area)
            break
        else:
            print("These length cannot form a triangle")
