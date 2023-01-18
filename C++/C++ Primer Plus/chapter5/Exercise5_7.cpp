#include <iostream>

using namespace std;
struct Car {
    string producer;
    int year;
};

int main()
{
    Car * pc;
    int num;

    cout << "How many cars do you wish to catalog? ";
    cin >> num;
    cin.get();
    pc = new Car[num];
    for (int i = 0; i < num; ++i) {
        cout << "Case #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, pc[i].producer);
        cout << "Please enter the year make: ";
        (cin >> pc[i].year).get();
    }
    cout << "Here is the collection:\n";
    for (int i = 0; i < num; ++i) {
        cout << pc[i].year << " " << pc[i].producer << endl;
    }
    return 0;
}