#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if ( divisor == 0) {
        fprintf(stderr, "Quit running when divisor is 0... \n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "The value of the quotient varible is: %d \n", quotient);

    exit(0);
}