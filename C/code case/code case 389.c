#include <stdio.h>

int main()
{
    int opo[11] =  {1, 4, 6, 9, 11, 16, 19, 28, 40, 100};
    int i, m;
    printf("The original array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", opo[i]);
    printf("\n Enter a digit: ");
    scanf("%d", &m);
    for (i = 9; i >= 0; i--)
    {
        if (m < opo[i])
            opo[i + 1] = opo[i];
        else
        { 
            opo[i + 1] = m;
            break;
        }
        if ( i == 0)
        {
            opo[0] = m;
            break;
        }
    }
    for (i = 0; i <= 10; i++)
        printf("%d ", opo[i]);
    printf("\n");

    return 0;
}