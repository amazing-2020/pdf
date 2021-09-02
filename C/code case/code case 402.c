#define LAG >
#define SMA <
#define EQ ==
#include <stdio.h>
int main()
{
    int i, j;

    printf("Please enter two numbers: ");
    scanf("%d %d", &i, &j);
    if (i LAG j)
        printf(" %d bigger than %d \n", i, j);
    else if (i SMA j)
        printf(" %d smaller than %d \n", i, j);
    else if (i EQ j)
        printf(" %d equals to %d \n", i, j);
    else
        printf("No value! \n");

    return 0;
}