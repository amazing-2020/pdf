first_number = input("\nFirst number: ")
second_number = input("\nSecond number: ")
try:
    answer = int(first_number) + int(second_number)
except ValueError:
    print("Please input numbers")
else:
    print(answer)
