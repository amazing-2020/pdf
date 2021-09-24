#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    long i = 10000000L;
    clock_t start, finish;
    double TheTimes;

    printf("The time required to do %ld empty loop is ", i);
    start = clock();
    while (i--);
    finish = clock();
    TheTimes = (double)(finish - start)/CLOCKS_PER_SEC;
    printf("%f sec. \n", TheTimes);

    return 0;
}