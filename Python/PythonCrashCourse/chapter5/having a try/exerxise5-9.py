name_list = ['jack', 'mike', 'john', 'juli', 'ann', 'admin']

for name in name_list:
    if name == 'admin':
        print(f"Hello {name}, would like to see the status report?")
    else:
        print(f"Hello {name}, thank you for logging in again.")

name_list = []
if not name_list:
    print("We need to find some users")
