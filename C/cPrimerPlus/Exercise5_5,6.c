#include <stdio.h>
void addemup5();
void addemup6();

int main(void)
{
    addemup5();
    addemup6();

    return 0;
}

void addemup5()
{
    int count, sum, i = 0;

    printf("Please enter an integer: ");
    scanf("%d", &count);
    sum = 0;
    while (i++ <= count)
    {
        sum += i;
    }
    printf("sumn= %d \n", sum);
}

void addemup6()
{
    int count, sum, i = 0;

    printf("Please enter an integer(squre func): ");
    scanf("%d", &count);
    sum = 0;
    while (i++ <= count)
    {
        sum += i*i;
    }
    printf("sumn= %d \n", sum);
}