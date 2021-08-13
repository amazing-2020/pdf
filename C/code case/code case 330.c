#include <stdio.h>
int main()
{
    int i=1, j;
    for (j=5; j>1; j--)
    {
        while (i<j)
        {
            printf("+");
            i++;
        }
        int k=1;
        while (k < 10-2*j)
        {
            printf("*");
            k++;
        }
        while (i > 0)
        {
            putchar('%');
            i--;
        }
        printf("\n");
    }
    for (j=1; j<5; j++)
    {  
        while (i<j)
        {
            printf("+");
            i++;
        }
        int k=1;
        while (k < 10-2*j)
        {
            printf("*");
            k++;
        }
        while (i > 0)
        {
            putchar('%');
            i--;
        }
        printf("\n");
    }
    return 0;
}