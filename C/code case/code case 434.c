#include <stdio.h>
int main(int argc, char const *argv[])
{
    long sum = 4, s = 4;
    int j;

    for (j = 2; j <= 8; j++)
    {
        printf("The digits have %d numbers is odd number of digit %ld \n", j - 1, s);
        if ( j <= 2)
            s *= 7;
        else
            s *= 8;
        sum += s;
    }
    printf("The digits have %d numbers is odd number of digit %ld \n", j - 1, s);
    printf("The sum of the pdd numbers %ld \n", sum);

    return 0;
}
/**
 * the number from 0 to 7
*/