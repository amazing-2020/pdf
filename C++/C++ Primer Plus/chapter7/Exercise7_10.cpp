#include <iostream>
double calculate(double a, double b, double (*pd)(double x, double y));
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int main()
{
    using namespace std;
    double (*pd_arr[4])(double, double) = {
            add, subtract, multiply, divide
    };
    double a, b, result[4];
    cout << "Enter two numbers: ";
    while (cin >> a >> b)
    {
        int n = 0;
        result[n] = calculate(a, b, pd_arr[n]);
        cout << a << " + " << b << " = " << result[n++] << endl;
        result[n] = calculate(a, b, pd_arr[n]);
        cout << a << " - " << b << " = " << result[n++] << endl;
        result[n] = calculate(a, b, pd_arr[n]);
        cout << a << " * " << b << " = " << result[n++] << endl;
        if (b != 0)
        {
            result[n] = calculate(a, b, pd_arr[n]);
            cout << a << " / " << b << " = " << result[n++] << endl;
        } else {
            cout << "Invalid\n";
        }
        cout << "Enter two numbers(q to quit): ";
    }
    cout << "Done!\n";
    return 0;
}

double calculate(double a, double b, double (*pd)(double x, double y))
{
    return (*pd)(a, b);
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}