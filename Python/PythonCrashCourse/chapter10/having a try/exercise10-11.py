import json

filename = 'numbers.json'
number = input("What's your favorite number? ")

with open(filename, 'w') as f:
    json.dump(number, f)
with open(filename) as f:
    number = json.load(f)
print(f"I know your favorite number! It's {number}")
