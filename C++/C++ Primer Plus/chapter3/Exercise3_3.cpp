#include <iostream>
int main()
{
    using namespace std;
    //const double f = 1/60.0;
    const double secondsToHigher = 60;
    double degrees, minOfArc, secOfArc;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minOfArc;
    cout << "Finally, enter the seconds of arc: ";
    cin >> secOfArc;
    cout << degrees << " degrees, " << minOfArc << " minutes, " << secOfArc << " seconds = " <<
        degrees + minOfArc / secondsToHigher + secOfArc / (secondsToHigher * secondsToHigher) << " degrees";

    return 0;
}