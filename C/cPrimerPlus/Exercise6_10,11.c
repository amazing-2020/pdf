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
    long low, high;
    long sum = 0;

    printf("Please enter lower and upper integer limits: ");
    scanf("%ld %ld", &low, &high);
    while (low < high)
    {
        for (long i = low; i <= high; i++)
        {
            sum += i*i;
        }
        printf("The sums of the squares from %ld to %ld is %ld \n", low*low, high*high, sum);
        printf("Enter next set of limits: ");
        scanf("%ld %ld", &low, &high);
    }
    printf("Done! \n");
}