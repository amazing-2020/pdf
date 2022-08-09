#include <stdio.h>
void sweetie2();
void for_cube();
int main(void)
{
    const int NUMBER = 22;
    int count = 1;

    while (count <= NUMBER)
    {
        printf("By my Valentine! \n");
        count++;
    }
    printf("------------ \n");
    sweetie2();
    printf("------------ \n");
    for_cube();

    return 0;
}

void sweetie2()
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++)
        printf("Be my Valentine! \n");
}

void for_cube()
{
    int num;

    printf("    n  n cubed \n");
    for (num = 1; num <= 6; num++)
        printf("%5d %7d \n", num, num*num*num);
}