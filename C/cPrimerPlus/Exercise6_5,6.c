#include <stdio.h>
#include <math.h>
void printPyramid();
void printTable();
int main(void)
{
    printf("This is letter pyramid: \n");
    printPyramid();
    printf("This is the table: \n");
    printTable();

    return 0;
}

void printPyramid()
{
    const int line = 5;
    const char character = 'A';
    char Letter = character;
    int i, j, k, h;

    for (i = 1; i <= line; i++)
    {
        for (j = 0; j < line - i; j++)
        {
            printf(" ");
        }
        for (k = 0, Letter = character; k < i; k++, Letter++)
        {
            printf("%c", Letter);
        }
        Letter--;
        for (h = i-1 ; h > 0; h--)
        {
            Letter--;
            printf("%c", Letter);
        }
        printf("\n");
    }
}

void printTable()
{
    long number1, number2;

    printf("Please enter two integer: ");
    scanf("%ld %ld", &number1, &number2);
    printf("  num      num^2           num^3 \n");
    if (number1 > number2)
    {
        long t = number2;
        number2 = number1;
        number1 = t;
    }
    for (long i = number1; i <= number2; i++)
    {
        printf("%5ld %10ld %15ld \n", i, i*i, i*i*i);
    }
}