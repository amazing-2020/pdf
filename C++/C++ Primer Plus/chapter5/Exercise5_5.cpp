#include <iostream>
int main()
{
    using namespace std;
    int sale[12];
    int sum = 0;
    const char *months[12] = {"January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; ++i)
        cin >> sale[i];
    for (int i = 0; i < 12; ++i)
    {
        cout << "In " << months[i] << " sales is \t" << sale[i] << endl;
        sum += sale[i];
    }
    cout << "In this year, we sells " << sum << " books."  << endl;
    return 0;
}