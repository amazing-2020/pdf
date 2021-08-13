#include <stdio.h>

int DigitSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + DigitSum(n / 10);
}
int main()
{
    printf("%d \n", DigitSum(1729));
    
    return 0;
}