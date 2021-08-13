#include <stdio.h>
int main(void)
{
    int i, t, n;
    long long sum, temp;

    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        if (n == 0 || n == 1)
        {
            printf("1 \n");
            break;
        }
        else 
        {
            for (i = 1; i <= n; i++)
            {
                temp = 1;
                t = i;
                while (t)
                {
                    temp *= t;
                    t--;
                }
                sum += temp;
            }
            printf("%lld \n", sum);
            break;
        }
    }
    
    return 0;
}