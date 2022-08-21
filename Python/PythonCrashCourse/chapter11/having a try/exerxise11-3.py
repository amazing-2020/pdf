import unittest


class Employee:
    def __init__(self, first_name, last_name, salary):
        self.first_name = first_name
        self.last_name = last_name
        self.salary = salary

    def give_raise(self, add_salary=5000):
        self.salary += add_salary


class TestEmployee(unittest.TestCase):
    def setUp(self):
        self.my_salary = Employee('nike', 'jordan', 60000)
        self.salary_list = [7000]

    def test_give_default(self):
        self.my_salary.give_raise()
        self.assertEqual(65000, self.my_salary.salary)

    def test_give_custom_rise(self):
        self.my_salary.give_raise(self.salary_list[0])
        self.assertEqual(67000, self.my_salary.salary)


if __name__ == '__main__':
    unittest.main()
