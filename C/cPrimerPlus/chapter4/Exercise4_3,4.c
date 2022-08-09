#include <stdio.h>

void heightAndName();

int main(void)
{
    float number;

    printf("Please enter a number: ");
    scanf("%f", &number);
    printf("The input is %.1f or %.1e \n", number, number);
    printf("The input is %+.3f or %E \n", number, number);

    heightAndName();

    return 0;
}

void heightAndName()
{
    char name[20];
    float height;

    printf("Please input your name: ");
    scanf("%s", name);
    printf("Ok, Please input your height(cm): ");
    scanf("%f", &height);
    printf("%s, you are %.2f feet tall. \n", name, height/100);
}