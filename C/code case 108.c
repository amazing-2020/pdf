#include <stdio.h>
#define square(x, y) ((x)>(y)?(y):(x))
int main()
{
    printf("Min between 20 and 10 %d\n", square(10, 20));
    return 0;
}