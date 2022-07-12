#include <stdio.h>
#define MAX 100
void post_pre();
void bottles();

int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ultra;
        printf("supper = %d, ultra = %d \n", super, ultra);
    } 
    post_pre();
    putchar('\n');
    bottles();

    return 0;
}


void post_pre()
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;
    pre_b = ++b;
    printf("a  a_post   b  pre_b \n");
    printf("%1d %5d %5d %5d \n", a, a_post, b, pre_b);
}


void bottles()
{
    int count = MAX + 1;
    while (--count > 0)
    {
        printf("%d bottles of spring water on the wall,"
        "%d bottles of spring water! \n", count, count);
        printf("Take one down and pass it around, \n");
        printf("%d bottles of spring water! \n\n", count - 1);
    }
}