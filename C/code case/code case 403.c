#include <stdio.h>
#define MAX
#define MAXIMUM(x, y) (x>y)? x:y
#define MINIMUM(x, y) (x<y)? x:y
int main()
{
    int a = 10, b = 20;
#ifdef MAX
    printf("The bigger number is: %d \n", MAXIMUM(a, b));
#else
    printf("The smaler number is: %d \n", MINIMUM(a, b));
#endif
#ifndef MIN
    printf("The smaler number is: %d \n", MINIMUM(a, b));
#else
    printf("The bigger number is: %d \n", MAXIMUM(a, b));
#endif
#undef MAX
#ifdef MAX
    printf("The bigger number is %d \n", MAXIMUM(a, b));
#else
    printf("The smaler number is: %d \n", MINIMUM(a, b));
#endif
#define MIN
#ifndef MIN
    printf("The smaler number is: %d \n", MINIMUM(a, b));
#else
    printf("The bigger number is %d \n", MAXIMUM(a, b));
#endif
    return 0;
}