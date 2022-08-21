import json

filename = 'numbers12.json'


def get_number():
    try:
        with open(filename) as f:
            number = json.load(f)
    except FileNotFoundError:
        return None
    else:
        return number


def show_number():
    number = get_number()
    if number:
        print(f"I know your favorite number! It's {number}")
    else:
        number = input("What's your favorite number? ")
        with open(filename, 'w') as f:
            json.dump(number, f)


show_number()
