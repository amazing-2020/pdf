#include <stdio.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    time_t start, end;
    int i;
    
    start = time(NULL);
    for (i = 0; i < 300000; i++)
        printf("\n");
    end = time(NULL);

    printf("The time interval is: %6.5f \n", difftime(end, start));

    return 0;
}
