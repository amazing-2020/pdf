#include <iostream>
int main()
{
    using namespace std;
    const int secPerM = 60, minPerH = 60, hourPerDay = 24;
    long sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    cout << sec << "seconds = " << sec / (secPerM * minPerH * hourPerDay) << " days, "
    << sec / (secPerM * minPerH) % hourPerDay << " hours, "
    << sec / (secPerM) % minPerH << " minutes, "
    << sec % secPerM << " seconds";

    return 0;
}