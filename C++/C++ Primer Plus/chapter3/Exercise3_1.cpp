#include <iostream>
int main()
{
    using namespace std;
    int height;
    const int Foot_inch = 12;

    cout << "Enter your height(inch):__\b\b";
    cin >> height;
    cout << "Your height is " << height / Foot_inch << " foot, " << height % Foot_inch << " inch." << endl;
    return 0;
}