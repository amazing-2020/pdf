#include <stdio.h>
int main()
{
    int a[11] = {1, 4, 6, 9, 11, 16, 19, 28, 40, 100};
    int temp1, temp2, number, end, i, j;

    printf("The primary array is: ");
    for (i = 0; i < 10; i++)
        printf("%d  ", a[i]);
    printf("\n Please enter a new number: ");
    scanf("%d", &number);
    end = a[9];
    if (number > end)
        a[10] = number;
    else
    {
        for (i = 0; i < 10; i++)
            if (a[i] > number)
            {
                temp1 = a[i];
                a[i] = number;
                for (j = i + 1; j < 11; j++)
                {
                    temp2 = a[j];//保存a[i+1]的值
                    a[j] = temp1;//修改a[i+1]的值
                    temp1 = temp2;//下一次循环将本次循环的a[j]赋值给a[j+1]
                }
                break;
            }
    }
    for (i = 0; i < 11; i++)
        printf("%d  ", a[i]);
    printf("\n");

    return 0;
}