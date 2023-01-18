#include <iostream>
int main()
{
    using namespace std;
    cout << "The amazing Accounto will sum and average ";
    cout << "five numbers for you.\n";
    cout << "Please enter fice values:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; ++i) {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "And average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";
    return 0;
}