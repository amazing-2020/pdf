favorite_numbers = {
    'a': [1, 2, 8],
    'b': [6, 9, 16],
    'c': [3, 9, 19],
    'd': [9, 7, 0],
    'e': [234, 32, 23],
    'f': [12, 34, 36],
}

for name, numbers in favorite_numbers.items():
    print(f"{name} favorite number is:")
    for number in numbers:
        print(number, end=" ")
    print()
