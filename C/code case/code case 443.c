#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("The current local time is: %s \n", asctime(timeinfo));

    return 0;
}
