#include <iostream>
int main()
{
    using namespace std;
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Your age in months is " << age * 12 << endl;
    return 0;
}