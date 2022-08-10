favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python'
}

accept_investigating = ['jen', 'mike', 'phil', 'joe', 'elizabeth']

for person in accept_investigating:
    if person in set(favorite_languages.keys()):
        print(f"Dear {person}, thank you for join our investigating.")
    else:
        print(f"Dear {person}, please join our investigating.")
