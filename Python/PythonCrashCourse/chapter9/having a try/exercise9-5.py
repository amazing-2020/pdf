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


basketball_player = User('Michael', 'Jordan')
basketball_player.increment_login_attempts()
print(basketball_player.login_attempts)
basketball_player.reset_login_attempts()
print(basketball_player.login_attempts)
