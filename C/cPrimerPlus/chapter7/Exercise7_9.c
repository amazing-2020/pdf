#include <stdio.h>
#include <math.h>
void Prime(int n);
int main(void)
{
    int num, i;

    while (1)
    {
        printf("Please enter positive integer(0 to quit): ");
        scanf("%d", &num);
        if (num == 0)
            break;
        if (num < 0)
        {
            printf("Please enter positive integer! \n");
            continue;
        }
        else
        {
            for (i  = 2; i <= num; i++)
                Prime(i);
            printf("\n");
        }
    }
    printf("Bye!\n");

    return 0;
}

void Prime(int n)
{
    int i, factor = 1;
    
    for (i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
        {
            factor = 0;
            break;
        }
    }
    if (factor)
        printf("%d ", n);
}