class User:

    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name
        self.login_attempts = 0

    def describe_user(self):
        print(f"The name is {self.first_name} {self.last_name}.")

    def greet_user(self):
        print(f"Hello {self.first_name} {self.last_name}!")

    def increment_login_attempts(self):
        self.login_attempts += 1

    def reset_login_attempts(self):
        self.login_attempts = 0


class Privileges:
    def __init__(self, privileges=None):
        if privileges is None:
            privileges = ["can add post", "can delete user", "can be user", "can add model"]
        self.privileges = privileges

    def show_privileges(self):
        print("For Administrators, he has these privileges:")
        for privilege in self.privileges:
            print(f"\t{privilege}")


class Admin(User):
    def __init__(self, first_name, last_name):
        super(Admin, self).__init__(first_name, last_name)
        self.privileges = Privileges()


admin = Admin('microsoft', 'bill')
admin.privileges.show_privileges()
