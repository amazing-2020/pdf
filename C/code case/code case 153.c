#include <stdio.h>

int main(void)
{
    char a;
    scanf("%d", &a);
    printf("%d %c\n", a, a);
    printf("\a A beep! \n");
    
    double num; 
    scanf("%lf", &num);
    printf("%.2lf %.8lf %e %a \n", num, num, num, num);

    int year; 
    double second;
    scanf("%d", &year);
    second = 3.1536e7 * year;
    printf("%lf \n", second);

    return 0;
}