#include <iostream>
int main()
{
    using namespace std;
    double length, gallon;

    cout << "Enter your driving distance: ";
    cin >> length;
    cout << "Enter the amount of gasoline used: ";
    cin >> gallon;
    cout << "Using one gallon gasoline, you drive " << length / gallon << " miles." << endl;
    return 0;
}