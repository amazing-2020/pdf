#include <iostream>
long double factorial(int);
int main()
{
    using namespace std;
    int n;
    cout << "Enter a number: ";
    while (cin >> n && n >= 0)
    {
        cout << factorial(n) << endl;
        cout << "Next number (q to quit): ";
    }
    cout << "bye!\n";
    return 0;
}

long double factorial(int n)
{
    long double m = 1;
    if (n == 0)
        m = 1;
    else
        m = n * factorial(n - 1);
    return m;
}