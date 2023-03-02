#include <iostream>
double harmonic_mean(double a, double b);

int main()
{
    using namespace std;

    double a, b;
    cout << "Please type two number: ";
    while (cin >> a >> b && a && b)
    {
        cout << "The harmonic mean of " << a << " and " << b << " is " << harmonic_mean(a, b) << endl;
        cout << "Please enter another two number: ";
    }
    cout << "bye!\n";
    return 0;
}

double harmonic_mean(double a, double b)
{
    return 2 * a * b / (a+b);
}