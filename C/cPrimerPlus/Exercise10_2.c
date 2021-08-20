#include <stdio.h>
void copy_arr(double * target1, double str[5], int n);
void copy_ptr(double * target2, double * str, int n);
void copy_ptrs(double * target3, double * str, double *str5);
void print(double * target);
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, &source[5]);
    print(target1);
    print(target2);
    print(target3);

    return 0;
}

void copy_arr(double * target1,  double str[5], int n)
{
    for (int i = 0; i < n; i++)
        *(target1 + i) = str[i];
}

void copy_ptr(double  target2[],  double * str, int n)
{
    for (int i = 0; i < n; i++)
        target2[i]= *(str++);
}

void copy_ptrs(double * target3,  double * str, double *str5)
{
    for (int i = 0; str < str5; str++, i++)
        *(target3 + i) = *str;
}

void print(double * target)
{
    for (int i = 0; i < 5; i++)
        printf("%lf ", target[i]);
    printf("\n");
}