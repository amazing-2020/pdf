files_name = ['cats.txt', 'dogs.txt']

for file_name in files_name:
    try:
        with open(file_name) as file_object:
            contents = file_object.read()
    except FileNotFoundError:
        pass
    else:
        print(contents)
