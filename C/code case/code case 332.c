#include <stdio.h>
int main()
{
    int std[7][7] = {
        {0,0,0,1,0,0,0},
        {0,0,1,1,1,0,0},
        {0,1,1,1,1,1,0},
        {1,1,1,1,1,1,1},
        {0,1,1,1,1,1,0},
        {0,0,1,1,1,0,0},
        {0,0,0,1,0,0,0},
    };
    
    int i, j;

    for (i=0; i<7; i++)
    {
        for(j=0; j<7; j++)
        {
            if(std[i][j] == 1)
            {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}