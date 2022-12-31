#include <iostream>
void showTime(int, int);
int main()
{
    using namespace std;
    int hours, minutes;
    cout << "Please enter the number of hours: ";
    cin >> hours;
    cout << "Please enter the number of minutes: ";
    cin >> minutes;
    showTime(hours, minutes);
    return 0;
}

void showTime(int h, int m)
{
    using namespace std;
    cout << "Time: " << h << ":" << m << endl;
}