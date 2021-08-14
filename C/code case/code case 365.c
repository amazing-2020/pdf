#include <stdio.h>
int main()
{
    long n;
    printf("Please enter five numbers: ");
    scanf("%ld", &n);
    int x[100];
    int i = 0;
    while (n != 00)
    {
        x[i] = n % 10;
        n /= 10;
        i++;
    }
    int flag = 1;
    for (int z = i; z >= 0; z-- )
    {
        if (x[z] != x[i - 1 -z])
        {
            flag = 0;
            printf("This isn't the number of palidrome. \n");
            break;
        }
    }
    if (flag == 1)
        printf("This is the number of palidrome. \n");

    return 0;
}