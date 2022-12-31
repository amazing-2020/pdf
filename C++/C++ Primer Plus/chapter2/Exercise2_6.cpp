#include <iostream>
void showAstronomical(double);
int main()
{
    using namespace std;
    double lightYears;
    cout << "Enter the value of light years: ";
    cin >> lightYears;
    showAstronomical(lightYears);
    return 0;
}

void showAstronomical(double n)
{
    using namespace std;
    cout << n << " light years = " << n * 63240 << " astronomical units." <<endl;
}