#include <stdio.h>

typedef struct student 
{
    char name[20];
    int age;
    int num;
} stu;

int main()
{
    struct student stuArray[3];
    for (int i=0; i < 3; i++)
    {
        scanf("%s %d %d", stuArray[i].name, &stuArray[i].age, &stuArray[i].num);
        printf("OK! \n");
    }
    for (int i=0; i<3; i++)
    {
        printf("第 %d 学生的名字： %s 年龄： %d 学号： %d \n", i+1, stuArray[i].name, stuArray[i].age, stuArray[i].num);
    }

    return 0;
}
