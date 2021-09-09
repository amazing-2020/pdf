#include <stdio.h>
typedef struct 
{
    char name[20];
    char sex[5];
    int age;
}Stu;
void input(Stu * stu);
void output(Stu * stu);
int main()
{
    Stu stu[5];
    printf("Please enter the information of 5 students: name gender age: ");
    input(stu);
    printf("Their information: \n");
    output(stu);

    return 0;
}

void input(Stu * stu)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%s %s %d", stu[i].name, stu[i].sex, &stu[i].age);
        printf("Next \n");
    }
}

void output(Stu * stu)
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%s %s %d \n", stu[i].name, stu[i].sex, stu[i].age);
}