#include <iostream>
using namespace std;
int Fill_array(double [], const int);
void Show_array(const double [], const int);
void Reverse_array(double [], const int);
int main()
{
    using namespace std;
    const int Max = 10;
    double array[Max];
    int length = Fill_array(array, Max);
    cout << "The original data: ";
    Show_array(array, length);
    Reverse_array(array, length);
    cout << "The data after reversed: ";
    Show_array(array, length);
    return 0;
}

int Fill_array(double arr[], const int n)
{
    int count = 0;
    double temp;
    cout << "Enter the number #" << count+1 << ": ";
    while (count < n && cin >> temp)
    {
        arr[count++] = temp;
        if (count < n)
            cout << "Enter the number #" << count+1 << ": ";
    }
    return count;
}

void Show_array(const double arr[], const int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double arr[], const int n)
{
    for (int i = 0; i < n / 2; ++i)
        swap(arr[i], arr[n-i-1]);
}