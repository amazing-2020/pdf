#include <iostream>

using namespace std;

void set_v(int arr[], int n, int x)
{
    for (int i = 0; i < n; ++i)
        arr[i] = x;
}

void set_v_p(int * head, int * end, int n)
{
    int *p;
    for (p = head; p <= end; ++p)
        *p = n;
}

double max_d(double arr[], int n)
{
    double x = 0;
    for (int i = 0; i < n; ++i)
        if (arr[i] > x)
            x = arr[i];
    return x;
}