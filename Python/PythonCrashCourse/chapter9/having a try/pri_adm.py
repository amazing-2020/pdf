from user import User


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
