#include <stdio.h>
#include <stdlib.h>

main() 
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if (divisor == 0) 
    {
        fprintf(stderr, "Quit running when divisor is 0... \n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "The value of the quotient varible is: %d \n", quotient);

    exit(EXIT_SUCCESS);
}