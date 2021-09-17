#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    int monkeys = 5, remain_peach = 1, i, temp, k;

    for (i = 0; i < monkeys;)
    {
        int flag = 0;
        while (true)
        {
            temp = remain_peach * 5 % 4;
            if (temp == 0)
            {
                if (i == 0)
                    k = remain_peach;
                remain_peach = remain_peach * 5 / 4 + 1;
                if (i == 0 || (flag == 0 && i != 0))
                {
                    i++;
                    break;
                }
            }
            else
            {
                flag = 1;
                if (i != 0)
                {
                    i = 0;
                    remain_peach = k + 1;
                    break;
                }
                remain_peach++;
            }
        }
    }
    printf("At least %d peaches \n", remain_peach);

    return 0;
}
