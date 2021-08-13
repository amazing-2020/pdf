#include <stdio.h>
int main(void)
{
    int i, j, sequence1 = 0, sequence2 = 0, sequence3 = 0;
    int k = 0, n = 1;
    int sequence4 = 2;

    for (i = 1; i < 8; i++)
    {
        sequence3 = 4 + (i-1)*(-1);
        for (k = 0; k < sequence3; k++)
        {
            printf(" ");
        }
        if (i < 5)
        {
            sequence1 = 1 + (i-1)*2;
            for (j = 0; j < sequence1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (k  = 0; k < sequence4; k++)
            {
                printf(" ");
            }
            sequence2 = 5 + (n-1)*(-2);
            for (j = 0; j < sequence2; j++)
            {
                printf("*");
            }
            sequence4++;
            n++;
        }
        printf("\n");
    }

    return 0;
}