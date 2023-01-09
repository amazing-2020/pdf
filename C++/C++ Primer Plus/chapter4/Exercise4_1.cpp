#include <iostream>
int main()
{
    using namespace std;

    char LName[20], FName[30];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.get(FName, 30).get();
    cout << "What is your lst name? ";
    cin.get(LName, 20).get();
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << LName << ", " << FName << "\n";
    cout << "Grade: " << char(grade - 1) << '\n';
    cout << "Age: " << age << endl;

    return 0;
}