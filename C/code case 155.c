#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void) 
{
    printf("Number limits on this system: \n");
    printf("biggest int: %d \n", INT_MAX);
    printf("Smallest long long: %lld \n", LONG_MIN);
    printf("One byte = %d bits on this system \n", CHAR_BIT);
    printf("Largest double: %e \n", DBL_MAX);
    printf("Smallest normal float: %e \n", FLT_MIN);
    printf("float precision = %d digits \n", FLT_DIG);
    printf("float epsilon: %e \n", FLT_EPSILON);

    return 0;
}