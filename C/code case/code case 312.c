#include <stdio.h>

int main()
{
    int sum=0, a, n, temp;
    while (scanf("%d %d", &a, &n) == 2)
    {
        temp = a;
        while (n--)
        {
            sum += temp;
            temp = temp*10 + a;
        }
        printf("sum = %d \n", sum);
        if (getchar() == '\n')
        {
            printf("Enter-q to end. \n");
            if (getchar() == 'q')
            {
                break;
            } else {
                continue;
            }
        }
        
    }
    
    return 0;
}