import cmath
num1 = float(input("Please enter a number: "))
num2 = num1 ** 0.5
print("%.2f = %.2f * %.2f" % (num1, num2, num2))

num3 = cmath.sqrt(num1)
print("%.2f = %.2f * %.2f" % (num1, num3.real, num3.real))
