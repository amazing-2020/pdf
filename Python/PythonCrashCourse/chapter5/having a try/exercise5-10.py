current_users = ['jack', 'mike', 'john', 'juli', 'ann', 'admin']
new_users = ['jack', 'admin', 'turing', 'tesla', 'mask']
current_users_copy = [name.lower() for name in current_users]

for new_user in new_users:
    if new_user.lower() in current_users_copy:
        print("Please enter another user name")
    else:
        print(f"the name {new_user}, was not used")
