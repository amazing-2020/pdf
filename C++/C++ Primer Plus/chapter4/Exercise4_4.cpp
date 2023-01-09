#include <iostream>
//#include <string>
int main()
{
    using namespace std;
    string tmp, nameStr;

    cout << "Enter your first name: ";
    getline(cin, tmp);
    nameStr = tmp + ", ";
    cout << "Enter your last name: ";
    getline(cin, tmp);
    nameStr += tmp;
    cout << "Here's the information in a single string: " << nameStr << endl;
    return 0;
}