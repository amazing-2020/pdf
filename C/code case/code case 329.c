#include <stdio.h>

int main()
{
    int i, j, space_sum = 3, start_num = 1;
    for ( i = 1; i <= 7; i++)
    {
        for ( j = space_sum; j > 0; j--)
        {
            printf(" ");
        }
        for ( j = start_num; j > 0; j--)
        {
            printf("*");
            //putchar('*');
        }
        if ( i > 7/2)
        {
            space_sum++;
            start_num -= 2;
        } else {
            space_sum--;
            start_num += 2;
        }
        printf("\n");
    }
    

    return 0;
}