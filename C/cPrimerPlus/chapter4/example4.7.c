#include <stdio.h>
#define PAGE 996
#define Salary -999

int main(void)
{
    printf("*%d* \n", PAGE);
    printf("*%2d* \n", PAGE);
    printf("*%10d* \n", PAGE);
    printf("*%-10d* \n", PAGE);
    printf("*% d* \n", Salary);
    printf("*% d* \n", PAGE);

    return 0;
}