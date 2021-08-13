#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float mark;
};

int main(void) {

    struct student stu;
    
    printf("Enter information: ");
    printf("name: ");
    scanf("%s", stu.name);
    printf("score: ");
    scanf("%f", &stu.mark);
    printf("Serial number: ");
    scanf("%d", &stu.roll);

    printf("Iformation!!! \n" "name: %s, score: %f, Serial number: %d \n",
    stu.name, stu.mark, stu.roll);

    return 0;
}
