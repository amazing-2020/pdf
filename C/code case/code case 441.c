#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, i, aa[4], t;

    printf("Please enter a number with 4 numbers: ");
    scanf("%d", &a);
    aa[0] = a % 10;
    aa[1] = a % 100 / 10;
    aa[2] = a % 1000 / 100;
    aa[3] = a / 1000;
    
    for (i = 0; i <= 3; i++)
    {
        aa[i] += 5;
        aa[i] %= 10;
    }
    for (i = 0; i <= 3/2; i++)
    {
        t = aa[i];
        aa[i] = aa[3-i];
        aa[3 - i] = t;
    }
    printf("Encrypted number: ");
    for (i = 3; i >= 0; i--)
        printf("%d", aa[i]);
    printf("\n");

    return 0;
}
