#include <stdio.h>
void printReveredNumbers();
void sumOfSquare();
int main(void)
{
    printReveredNumbers();
    sumOfSquare();

    return 0;
}

void printReveredNumbers()
{
    int number[7] = {0};
    int i;

    printf("Please enter 8 numbers: ");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 6; i >= 0; i--)
    {
        printf("%8d", number[i]);
    }
    printf("\n");
}

void sumOfSquare()
{
    long low, heigh;
    long sum = 0;

    printf("Please enter lower and upper integer limits: ");
    scanf("%ld %ld", &low, &heigh);
    while (low < heigh)
    {
        for (long i = low; i <= heigh; i++)
        {
            sum += i*i;
        }
        printf("The sums of the squares from %ld to %ld is %ld \n", low*low, heigh*heigh, sum);
        printf("Enter next set of limits: ");
        scanf("%ld %ld", &low, &heigh);
    }
    printf("Done! \n");
}