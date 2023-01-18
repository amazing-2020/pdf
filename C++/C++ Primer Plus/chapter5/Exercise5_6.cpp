#include <iostream>
int main()
{
    using namespace std;
    int sale[3][12];
    int sum = 0;
    const char *months[12] = {"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December"};

    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 12; ++i)
            cin >> sale[j][i];
    }
    for (int j = 0; j < 3; ++j) {
        cout << "In the " << j+1 << " year, the book sell condition:\n";
        for (int i = 0; i < 12; ++i)
        {
            cout << "In " << months[i] << " sales is \t" << sale[j][i] << endl;
            sum += sale[j][i];
        }
    }
    cout << "In three year, we sells " << sum << " books."  << endl;
    return 0;
}