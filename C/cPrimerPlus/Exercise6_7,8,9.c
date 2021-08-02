#include <stdio.h>
#include <string.h>
#define Length 20
void printRaveredLetter();
void printCalculationResult();
void printCalculationResultWithFunction();
double calculateFunction(double i, double j);
int main(void)
{
    printRaveredLetter();
    printf("\n");
    printCalculationResult();
    printf("\n");
    getchar();
    printCalculationResultWithFunction();

    return 0;
}
void printRaveredLetter()
{
    char letter[Length];
    int extent;

    printf("Please enter a word: ");
    scanf("%s", letter);
    extent = strlen(letter);
    for (int i = extent-1; i >= 0; i--)
    {
        printf("%c", letter[i]);
    }
    printf("\n");
}

void printCalculationResult()
{
    double num1, num2;

    printf("Please enter two integers(function2): ");
    while (scanf("%lf%lf", &num1, &num2) == 2)
    {
        printf("(%lf - %lf)/(%lf * %lf) = %lf \n", num1, num2, num1, num2, (num1-num2)/(num1*num2));
        printf("Please enter two integers: ");
    }
}

void printCalculationResultWithFunction()
{
    double num1, num2;

    printf("Please enter two integers(function3): ");
    while (scanf("%lf%lf", &num1, &num2) == 2)
    {
        printf("(%lf - %lf)/(%lf * %lf) = %lf \n", num1, num2, num1, num2, calculateFunction(num1, num2));
        printf("Please enter two integers: ");
    }
}

double calculateFunction(double i, double j)
{
    return (i - j)/(i * j);
}