#include <stdio.h>
void entry();
int main(void)
{
    const int sert_code = 13;
    int code_entered;

    do
    {
        printf("To enter the thridsfdjkfls therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != sert_code);
    printf("Congratunations! You are cured!!! \n");

    entry();

    return 0;
}

void entry()
{
    const int sert_code = 13;
    int code_entered;

    printf("To enter the thridsfdjkfls therapy club, \n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != sert_code) 
    {
        printf("To enter the thridsfdjkfls therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congratunations! You are cured! \n");
}