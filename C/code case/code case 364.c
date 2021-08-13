#include <stdio.h>
int main()
{
    long ge, shi, qian, wan, num;

    printf("Enter a digit with 5 numbers: ");
    scanf("%ld", &num);
    ge = num % 10;
    shi = num /10 % 10;
    qian = num / 1000 % 10;
    wan = num / 10000 % 10;

    if (shi == qian && ge == wan)
        printf("This is the number of palidrome. \n");
    else
        printf("This isn't the number of palidrome. \n");

    return 0;
}