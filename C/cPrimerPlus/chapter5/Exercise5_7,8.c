#include <stdio.h>
void cubeValue(double num);
void moduloOperation();

int main(void)
{
    double number;
    
    printf("Please enter an number: ");
    scanf("%lf", &number);
    cubeValue(number);
    moduloOperation();
}

void cubeValue(double num)
{
    printf("%lf \n", num*num*num);
}

void moduloOperation()
{
    int operand;
    int number;

    printf("This program computes moduli. \n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &operand);
    printf("Now enter the first operand: ");
    while (1)
    {
        scanf("%d", &number);
        if (number <= 0)
        {
            printf("Done! \n");
            break;
        }
        printf("%d %% %d = %d\n", number, operand, number%operand);
        printf("Now enter the next second first operand (<= 0 to quit): ");
    }
    
}