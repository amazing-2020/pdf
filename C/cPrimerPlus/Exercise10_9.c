#include <stdio.h>
void VLA(int i, int j, double arr[i][j], double arr2[i][j]);
void showVLA(int i, int j, double arr[i][j]);

int main(void)
{
    double array[3][5] = {
        {844, 467, 991, 307, 299},
        {971, 709, 479, 57, 736},
        {62, 553, 514, 795, 381}
    };
    double array2[3][5];
     
    VLA(3, 5, array, array2);
    showVLA(3, 5, array);
    showVLA(3, 5, array2);

    return 0;
}

void VLA(int i, int j, double arr[i][j], double arr2[i][j])
{
    int m, n;
    for (m = 0; m < i; m++)
        for (n = 0; n < j; n++)
            arr2[m][n] = arr[m][n];
}
void showVLA(int i, int j, double arr[i][j])
{
    int m, n;
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
            printf("%0.0lf ", arr[m][n]);
        printf("\n");
    }
}