#include <stdio.h>

int main()
{
    int i; // loop number
    int j = 1; // peaches belong to the fifth monkey
    int x; // num of peaches

    while (1)
    {
        x = 4 * j;
        printf("When the fifth monkey get %d peaches, %d peaches was left. \n", j, x);
        for (i = 0; i < 5;)
        {
            if (x % 4 != 0)
                break;
            else
            {
                x = (x/4) * 5 + 1;
                printf("When the fifth monkey get %d peaches, %d peaches was left. \n", j, x);
                i++;
            }
        }
        printf("\n");
        
        j++;
        if ( i == 5)
            break;
    }
    printf("%d", x);

    return 0;
}

/**
 * 设海滩上原来有x个桃子，则
 * 第一只猴子分完桃子之后剩下的桃子x1=x-1-(x-1)/5=(4*(x-1))/5
 *第二只猴子分完桃子之后剩下的桃子x2=x1-1-(x1-1)/5=(4*(x1-1))/5
 *第三只猴子分完桃子之后剩下的桃子x3=x2-1-(x2-1)/5=(4*(x2-1))/5
 *第四只猴子分完桃子之后剩下的桃子x4=x3-1-(x3-1)/5=(4*(x3-1))/5
 *第五只猴子分完桃子之后剩下的桃子x5=x4-1-(x4-1)/5=(4*(x4-1))/5
*/