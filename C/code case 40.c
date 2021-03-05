#include <stdio.h>

typedef struct student
{
    char name[20];
    int age;
    int num;
} stu;

int main()
{
    struct student stuArray[3] = {
        {"Mike liu", 23, 753159},
        {"Zhang xu weng", 44, 462879},
        {"Guang hua jing", 55, 741369}
    };

    for (int i=0; i < 3; i ++)
    {
        printf("第 %d 学生的名字： %s 年龄： %d 学号： %d \n", i+1, stuArray[i].name, stuArray[i].age, stuArray[i].num);
    }

    return 0;
}