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


emp1 = Employee("Zara", 2000)
print("Total Employee: %d" % Employee.emp_count)
emp2 = Employee("Manni", 5000)
emp1.displayEmployee()
print("Total Employee: %d" % Employee.emp_count)
emp2.displayEmployee()
print("Total Employee: %d" % Employee.emp_count)
print(hasattr(emp2, "age"))
