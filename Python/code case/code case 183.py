class Employee:
    emp_count = 0

    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.emp_count += 1

    def displayCount(self):
        print("Total employee %d" % Employee.emp_count)

    def displayEmployee(self):
        print("Name:", self.name, ", Salary: ", self.salary)


print(Employee.__doc__)
print(Employee.__name__)
print(Employee.__module__)
print(Employee.__bases__)
print(Employee.__dict__)
