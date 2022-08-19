name = input("Please enter your name: ")
filename = 'guest.txt'
with open(filename, 'w') as file_object:
    file_object.write(name)
