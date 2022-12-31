#include <iostream>
int main()
{
    using namespace std;
    double gasPerHuKilo;
    const double gallon_to_liter = 3.875, kilo_to_mile = 62.14;
    cout << "Enter the amount of gasoline per 100 kilometer your car used: ";
    cin >> gasPerHuKilo;
    cout << "One gallon gasoline drive " << 1 / (gasPerHuKilo / gallon_to_liter) * kilo_to_mile << " miles." << endl;
    return 0;
}