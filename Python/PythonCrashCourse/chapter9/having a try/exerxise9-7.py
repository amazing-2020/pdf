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


class Admin(User):
    def __init__(self, first_name, last_name):
        super(Admin, self).__init__(first_name, last_name)
        self.privileges = []

    def show_privileges(self, privileges):
        self.privileges = privileges[:]
        print("For Administrators, he has these privileges:")
        for privilege in self.privileges:
            print(f"\t{privilege}")


admin = Admin('microsoft', 'bill')
privileges_admin = ["can add post", "can delete user", "can be user", "can add model"]
admin.show_privileges(privileges_admin)
