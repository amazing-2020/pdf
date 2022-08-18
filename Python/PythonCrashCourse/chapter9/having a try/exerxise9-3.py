class User:

    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name

    def describe_user(self):
        print(f"The name is {self.first_name} {self.last_name}.")

    def greet_user(self):
        print(f"Hello {self.first_name} {self.last_name}!")


basketball_player = User('Michael', 'Jordan')
basketball_player.describe_user()
basketball_player.greet_user()

foot_player = User('Cristiano', 'Ronaldo')
foot_player.describe_user()
foot_player.greet_user()

president = User('Donald', 'Trump')
president.describe_user()
president.greet_user()
