#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};
struct student 
{
    char name[10];
    struct date birthday;
} student1;

int main()
{
    struct student student1 = {
        "liming",
        1996,
        02,
        26        
    };
    struct student student2;
    student2 = student1;
    printf("输出student1: %s %d %d %d \n", student1.name, student1.birthday.year, student1.birthday.month, student1.birthday.day);
    printf("输出student2: %s %d %d %d \n", student2.name, student2.birthday.year,student2.birthday.month, student2.birthday.day);

    return 0;
}