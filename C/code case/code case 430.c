#include <stdio.h>
int calc_peaches(int monkeys)
{
    int m = monkeys;

    int remain;
    int i = 1;

    while (1)
    {
        remain = 4 * i;
        for (m = monkeys; m > 0; m--)
        {
            if ((remain - 1) % 5 != 0)
                break;
            if (m > 1 && remain % 4 != 0)
                break;
            if (m > 1)
                remain = remain * 5 / 4 + 1;
            else
                break;
        }
        if (m == 1)
            break;
        else
            i++;
    }
    return remain;
}

int main(void)
{
    int monkeyes;

    printf("Please enter the number of the monkeyes: ");
    scanf("%d", &monkeyes);
    printf("The num of the peaches: %d \n", calc_peaches(monkeyes));

    return 0;
}