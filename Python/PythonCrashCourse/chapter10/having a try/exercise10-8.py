files_name = ['cats.txt', 'dogs.txt']

for file_name in files_name:
    try:
        with open(file_name) as file_object:
            contents = file_object.read()
    except FileNotFoundError:
        print(f"File {file_name} no found!")
    else:
        print(contents)
