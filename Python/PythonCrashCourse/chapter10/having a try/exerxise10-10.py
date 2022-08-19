filename = 'Modern bookbindings: Their design and decoration.txt'
words = 'the '

with open(filename) as file_object:
    contents = file_object.read()
print(contents.lower().count(words))
