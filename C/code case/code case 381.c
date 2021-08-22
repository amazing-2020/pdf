#include <stdio.h>
int main()
{
    int i, j, k = 0, n;
    int prime[1000];

    printf("Please enter a range fram 0 to a, enter a: ");
    scanf("%d", &n);
    prime[0] = 2;
    for (i = 2; i <= n; i++)
    {
        for (j = 0; j <= k; j++)
            if (i % prime[j] == 0)
                break;
        if (j > k)
        {
            k++;
            prime[k] = i;
        }
    }
    for (i = 0; i <= k; i++)
        printf("%d  ", prime[i]);
    printf("\n");

    return 0;
}