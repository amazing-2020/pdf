#include <iostream>
using namespace std;
double * Fill_array(double [], const int);
void Show_array(const double *, const double *);
void Reverse_array(double *, double *);
int main()
{
    using namespace std;
    const int Max = 10;
    double array[Max];
    double * end = Fill_array(array, Max);
    cout << "The original data: ";
    Show_array(array, end);
    Reverse_array(array, end-1);
    cout << "The data after reversed: ";
    Show_array(array, end);
    return 0;
}

double * Fill_array(double arr[], const int n)
{
    double * end;
    int count = 0;
    double temp;
    cout << "Enter the number #" << count+1 << ": ";
    while (count < n && cin >> temp)
    {
        arr[count++] = temp;
        end = arr+count;
        if (count < n)
            cout << "Enter the number #" << count+1 << ": ";
    }
    return end;
}

void Show_array(const double * start, const double * end)
{
    const double * pd;
    for (pd = start; pd != end; ++pd)
        cout << *pd << " ";
    cout << endl;
}

void Reverse_array(double * start, double * end)
{
    while (start < end)
    {
        swap(*start, *end);
        start++;
        end--;
    }
}