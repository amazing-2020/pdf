#include <stdio.h>
#define SEC_PER_MIN 60
void min_sec();

int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes. \n", n, sizeof n, intsize);
    min_sec();

    return 0;
}

void min_sec()
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds! \n");
    printf("Enter the number of seconds (<=0 to quit): ");
    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds. \n", sec, min, left);
        printf("Enter next value (<=0 to quit): \n");
        scanf("%d", &sec);
    }
    printf("Done! \n");
} 