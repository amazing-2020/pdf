N = 3
student = []
subjects = ["Chinese", "English", "Mathematics"]
for i in range(5):
    student.append(["", "", []])


def input_stu(stu):
    for i in range(N):
        stu[i][0] = input("enter student num:")
        stu[i][1] = input("Enter student name:")
        for j in range(3):
            stu[i][2].append(int(input(subjects[j]+' score:')))


def output_stu(stu):
    for i in range(N):
        print('%-6s%-10s' % (stu[i][0], stu[i][1]))
        for j in range(3):
            print('%-8d' % (stu[i][2][j]))


if __name__ == '__main__':
    input_stu(student)
    print(student)
    output_stu(student)
