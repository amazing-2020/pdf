#include <stdio.h>
void convert();

int main(void)
{
    int count, sum;

    count = 0;
    sum = 0;
    while (count++ <  20)
    {
        sum += count;
    }
    printf("sum = %d \n", sum);

    convert();

    return 0;
}

void convert()
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f \n", ch, i, fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f \n", ch, i, fl);
    ch = 1107;
    printf("Now ch = %c \n", ch);
    ch = 80.89;
    printf("Now ch = %c , P = %d\n", ch, 'P');
}