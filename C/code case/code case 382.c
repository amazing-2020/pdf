#include <stdio.h>
#define N 101

int prime[N], pNum = 0;
int p[N] = {0};

void find_Prime()
{
    int i, j;

    for (i = 2; i <= N; i++)
        if (p[i] == 0) // it is a prime
        {
            prime[pNum++] = i;
            for (j = i+i; j < N; j += i)
                p[j] = 1; // not a prime
        }
}

int main()
{
    find_Prime();
    int i;
    for (i = 0; i < pNum; i++)
        printf("%d  ", prime[i]);
    printf("\n");

    return 0;
}