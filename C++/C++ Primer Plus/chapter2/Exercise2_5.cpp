#include <iostream>
void celToF(float);
int main()
{
    using namespace std;
    float celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    celToF(celsius);
    return 0;
}

void celToF(float n)
{
    using namespace std;
    cout << n << " degrees Celsius is " << 1.8 * n + 32.0 << " degrees Fahrenheit." << endl;
}