#include <stdio.h>
int main(void)
{
    unsigned long long input;
    int bit = 0;
    int xar[20];

    printf("Please enter a digit within 20 numbers: ");
    scanf("%llu", &input);

    unsigned long long x = input;
    while (x > 0)
    {
        xar[bit++] = x % 10;
        x /= 10;
    }

    for (int i = 0; i < bit / 2; i++)
    {
        if (xar[i] != xar[bit - i - 1])
        {
            printf("This isn't the number of palidrome. \n");
            break;
        }
        if (i == bit / 2 - 1)
        {
            printf("This is the number of palidrome. \n");
            break;
        }
    }

    return 0;
}