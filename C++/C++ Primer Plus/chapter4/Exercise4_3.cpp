#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char tmp[20], nameStr[40];

    cout << "Enter your first name: ";
    cin.get(tmp, 20).get();
        strcpy(nameStr, tmp);
    strcpy(nameStr+strlen(nameStr), ", ");
    cout << "Enter your last name: ";
    cin.get(tmp, 20);
    strcpy(nameStr+strlen(nameStr), tmp);
    cout << "Here's the information in a single string: " << nameStr << endl;
    return 0;
}