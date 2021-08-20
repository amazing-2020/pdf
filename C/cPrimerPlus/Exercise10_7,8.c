#include <stdio.h>
void copy_ptr(double * target2, double * str, int n);
void copy_ptrs(double * target3, double * str, double *str5);
int main(void)
{
    double array[5][5] = {
        {891, 427, 803, 630, 478},
        {405, 846, 127, 302 ,729},
        {844, 467, 991, 307, 299},
        {971, 709, 479, 57, 736},
        {62, 553, 514, 795, 381}
    };
    double array1[5][5] = {0};
    double arr[7] = {12, 78, 45, 566, 999, 7895, 1235};
    double arr1[3] = {0};

    for (int i = 0; i < 5; i++)
            copy_ptr(array1[i], array[i], 5);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%0.0lf ", array1[i][j]);
        printf("\n");
    }

    copy_ptrs(arr1, &arr[2], &arr[5]);
    for (int i = 0; i < 3; i++)
        printf("%0.0lf ", arr1[i]);
    printf("\n");

    return 0;
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