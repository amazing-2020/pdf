#include <iostream>
const int size_name = 60;
struct group {
    char name[size_name];
    double donation;
};
int main()
{
    using namespace std;
    int n, count = 0;
    group * pg;

    cout << "How many people donate for our group: ";
    (cin >> n).get();
    pg = new group[n];
    for (int i = 0; i < n; ++i) {
        cout << "Enter the person #" << i+1 << ": \n";
        cout << "Enter the name: ";
        cin.getline(pg[i].name, size_name);
        cout << "Enter the money: ";
        (cin >> pg[i].donation).get();
    }
    cout << "Grand Patrons\n";
    for (int i = 0; i < n; ++i) {
        if (pg[i].donation > 10000)
        {
            cout << pg[i].name << "\t$" << pg[i].donation << "\n";
            count++;
        }
    }
    if (count == 0)
        cout << "none\n";
    count = 0;
    cout << "Patrons\n";
    for (int i = 0; i < n; ++i) {
        if (pg[i].donation < 10000)
        {
            cout << pg[i].name << "\t$" << pg[i].donation << "\n";
            count++;
        }
    }
    if (count == 0)
        cout << "none\n";
    delete[] pg;
    return 0;
}