#include <stdio.h>

void f14(int m, int n) 
{
    int i=0;
    int num=1;
    int tem1=m, tem2=n;
    int min = m<n? m:n;

    for ( i = 2; i < min; i++)
    {
        if ((m%i==0)&&(n%i==0))
        {
            num *= i;
            m /= i;
            n /= i;
            min /= i;
            i=1;//i的还原，不然在执行一次循环体后，i++=3，下次循环时，会将i=2这个商给跳过，出现问题
        }
    }
    
    printf("The greaest common divisor is: %d \n", num);
    printf("The least common mutiple is: %d \n", tem1*tem2/num);
}

int main() {
    int m, n;
    printf("Please input two integers: ");
    scanf("%d %d", &m, &n);
    f14(m, n);

    return 0;
}