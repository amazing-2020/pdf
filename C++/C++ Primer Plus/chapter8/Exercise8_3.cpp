#include <iostream>
void upper(std::string & str);
int main()
{
    using namespace std;
    string str;
    cout << "Enter a string (q to quit): ";
    while (getline(cin, str) && str.length() != 1 && str != "q")
    {
        cout << "Next string (q to quit): ";
        upper(str);
        cout << str << endl;
    }
    cout << "Bye." << endl;
    return 0;
}

void upper(std::string & str)
{
    for (int i = 0; i < str.length(); ++i)
        if (isalpha(str[i]))
            str[i] -= 32;
}