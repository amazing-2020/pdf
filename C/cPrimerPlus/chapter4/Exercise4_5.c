#include <stdio.h>

int main(void)
{
    float Speed, size;
    
    printf("Please input you net speed(Mb/s): ");
    scanf("%f", &Speed);
    printf("Please input the file's size(MB): ");
    scanf("%f", &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds. \n", Speed/8, size, size/Speed/8);

    return 0;
}
