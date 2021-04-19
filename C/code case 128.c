#include <stdio.h>
#include <stdarg.h>

#define END -1
int va_sum (int first_num, ...)
{
    va_list ap;
    va_start(ap, first_num);

    int result = first_num;
    int temp = 0;

    while ((temp = va_arg(ap, int)) != END)
    {
        result += temp;
    }
    va_end(ap);
    return result;
}
int main()
{
    int sum_val = va_sum(1, 2, 3, 4, 5, END);
    printf("%d \n", sum_val);

    return 0; 
}