#include <iostream>
const int Max = 10;
int input(int *, const int);
double average(const int *, const int);
void show(const int *, const int, const double);
using namespace std;
int main()
{
    int arr[Max];
    int num;
    double avg;

    num = input(arr, Max);
    if (num == 0)
        cout << "No data!\n";
    else
    {
        avg = average(arr, num);
        show(arr, num, avg);
    }
    return 0;
}

int input(int * arr, const int n)
{
    int count = 0;
    cout << "Please enter the #" << count+1 << " number: ";
    while (cin >> arr[count++] && count < n)
        cout << "Please enter the #" << count+1 << " number: ";
    return count-1;
}
double average(const int * arr, const int n)
{
    double sum = 0, avg;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    avg = sum / n;
    return avg;
}
void show(const int * arr, const int n, const double avg)
{
    cout << "The number you entered: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\nThe average of these number is: " << avg << endl;
}