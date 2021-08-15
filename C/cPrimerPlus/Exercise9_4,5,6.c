#include <stdio.h>
double harmonicMean(double x, double y);
void larger_of(double * x, double * y);
void threeAddress(int * x, int * y, int * z);
int main(void)
{
    double x, y, m, n;
    int i, j, k;

    printf("Please enter two number: ");
    scanf("%lf %lf", &x, &y);
    double num = harmonicMean(x, y);
    printf("The harmonic mean is : %lf \n", num);

    printf("Please enter two number m and n: ");
    scanf("%lf %lf", &m, &n);
    larger_of(&m, &n);
    printf("M = %lf, n = %lf \n", m, n);

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &i, &j, &k);
    threeAddress(&i, &j, &k);
    printf("i = %d, j = %d, k = %d \n", i, j, k);

    return 0;
}

double harmonicMean(double x, double y)
{
    double num;

    num = 1/((1/x+1/y)/2);

    return num;
}

void larger_of(double * x, double * y)
{
    if (*x > *y)
        *y = *x;
    else 
        *x = *y;
}

void threeAddress(int * x, int * y, int * z)
{
    int i = *x, j = *y, k = *z;
    int a, b, c;

    c = i > j ? i : j;
    b = i > k ? i : k;
    a = b > c ? b : c;    
    if ( b != c) //** b && c != minimum;
    {
        *y = b < c ? b : c;
    }
    else //** b || c == minimum;
    {
        *y = j > k ? j : k;
        *x = j > k ? k : j;
    }
    *z = a;

    c = i < j ? i : j;
    b = i < k ? i : k;
    a = c < b ? c : b;
    *x = a;
}