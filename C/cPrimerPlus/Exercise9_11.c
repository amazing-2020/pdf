#include <stdio.h>
unsigned long Fibonacci(int n);
unsigned long Fibonacci2(int n);
int main(void)
{
    int n;

    printf("Enter a number(n >= 0): ");
    scanf("%d", &n);
    printf("The %d fivonacci number is %lu \n", n, Fibonacci(n));
    printf("The %d fivonacci number is %lu \n", n, Fibonacci2(n));

    return 0;
}
unsigned long Fibonacci(int n)
{
    unsigned long num;

    if (n == 0)
        num = 0;
    if  (n == 1)
        num = 1;
    if (n > 1)
        num = Fibonacci(n - 1) + Fibonacci(n - 2);
    
    return num;
}

unsigned long Fibonacci2(int n)
{
    unsigned long num1 = 0, num2 = 1, num;
    if (n == 0)
        num = 0;
    if (n == 1)
        num = 1; 
    if (n >= 2)
        for (int i = 2; i <= n; i++)
        {
            if (i > 2)
            {
                num1 = num2;
                num2 = num;
            }
            num = num1 + num2;
        }
    
    return num;
}