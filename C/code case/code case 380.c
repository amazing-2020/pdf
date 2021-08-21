#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int num = 100;
    int i, j;
    bool *b;

    b = (bool *)calloc(num + 1, sizeof(bool));
    b[0] = false;
    for (i = 1; i <= num; i++)
        if (i % 2 == 0)
            b[i] = false;
        else    
            b[i] = true;
    
    for (int i = 3; i <= sqrt(num); i += 2)
        if (b[i])
            for (j = i+i; j <= num; j += i)
                b[j] = false;
    
    printf("2,");
    for (i = 3; i <= num; i++)
        if (b[i])
            printf(" %d,", i);
    free(b);
    b = NULL;

    return 0;
}