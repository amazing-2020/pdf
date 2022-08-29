filename = 'guest_book.txt'

while True:
    name = input("Please enter your name(q to end): ")
    if name == 'q':
        break
    else:
        greet = f"Hello, {name.title()}\n"
        print(greet)
        with open(filename, 'a') as file_abject:
            file_abject.write(greet)
