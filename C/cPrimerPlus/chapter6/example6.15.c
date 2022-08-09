#include <stdio.h>
void entry();
int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!!! \n");

    entry();

    return 0;
}

void entry()
{
    const int secret_code = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club, \n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code) 
    {
        printf("To enter the triskaidekaphobia therapy club, \n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured! \n");
}