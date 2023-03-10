#include <iostream>
#include <iomanip>
template<typename T>
T max5(T arr[5]);

int main()
{
    using namespace std;

    int arr1[5] = {234,324, 24, 324354, 32};
    double arr2[5] = {4545.004545, 4545.25, 45456.0, 8989.23, 787788.21};
    cout << max5(arr1) << endl;
    cout << fixed;
    cout << setprecision(5);
    cout << max5(arr2) << endl;
    return 0;
}

template<typename T>
T max5(T arr[5])
{
    double n = arr[0];
    for (int i = 0; i < 5; ++i)
        if (arr[i] > n)
            n = arr[i];
    return n;
}