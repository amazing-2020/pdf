#include <stdio.h>

int main(int argc, char *argv[])
{
    struct Student
    {
        char name[50];
        int gender;
        int age;
    } student2 = {"张三", 0, 33};
    struct Student student1;
    printf("name: \n");
    scanf("%s", student1.name);
    printf("gender \n");
    scanf("%d", &student1.gender);
    printf("age \n");
    scanf("%d", &student1.age);
    printf("%s %d %d \n", student1.name, student1.gender, student1.age);
    printf("%s %d %d \n", student2.name, student2.gender, student2.age);

    return 0;
}
