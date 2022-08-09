#include <stdio.h>
#define STOP 0
int main(void)
{   
    int number, even = 0, odd = 0;
    int evenNum = 0, oddNum = 0;

    printf("Enter numbers (0 to quit): ");
    while ((scanf("%d", &number)) == 1 && number !=  STOP)
    {
        int judge = ((number % 2 == 0));
        switch (judge)
        {
        case 0: even += number;
                evenNum ++;
                break;
        case 1: odd += number;
                oddNum++;
                break;
        default:
                break;
        }
        printf("Enter numbers(0 to quit): ");
    }
    printf("There are %d even numbers, the average is %0.3f, %d odd numbers, the average is %0.3f \n",
     evenNum, (float)even / (float)evenNum,oddNum, (float)odd / (float)oddNum);
    
    return 0;
}