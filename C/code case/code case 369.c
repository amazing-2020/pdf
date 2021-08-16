#include <stdio.h>
#define N 20
int main(void)
{
    int i, j;
    int n;
    int a[N];
    printf("Please enter  anumber: ");
    scanf("%d", &n);
    for (i = 0, j = 0; j < 5; j++)
    {
        a[j] = n % 10;
        n /= 10;
    }
    j = 0;
    i = 4;
    while (i > j)
    {
        if (a[i] != a[j])
        {
            printf("This isn't the number of palidrome. \n");
            return 0;
        }
        j++;
        i--;
    }
    printf("This is the number of palidrome. \n");

    return 0;
}