#include <stdio.h>
long N_A(int a, int b);
int main()
{
    int a, n;
    printf("Please input: ");
    scanf("%d %d", &a, &n);
    printf("a+aa+aaa……=%ld \n", N_A(a, n));

    return 0;
}
long N_A(int a, int b)
{
    long sum = 0;
    long temp = a;
    while (b)
    {
        sum += temp;
        temp = temp*10 + a;
        b--;
    }
    return sum;
}