import json


def get_stored_user():
    filename = 'username.json'
    try:
        with open(filename) as f:
            username = json.load(f)
    except FileNotFoundError:
        return None
    else:
        return username


def get_new_user():
    username = input("What is your name? ")
    filename = 'username.json'
    with open(filename, 'w') as f:
        json.dump(username, f)
    return username


def greet_user():
    username = get_stored_user()
    if username:
        print(F"Welcome back, {username}!")
        flag = input("Is your name right(y or n)?")
        if flag == 'n':
            get_new_user()
    else:
        username = get_new_user()
        print(f"We'll remember you when you come back, {username}!")


greet_user()

