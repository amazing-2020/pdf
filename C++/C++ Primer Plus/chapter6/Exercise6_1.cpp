#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;

    while (cin.get(ch) && ch != '@')
    {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        else if (isdigit(ch))
            ch = '\0';
        else
            ;
        cout << ch;
    }
    cout << "\nDone!\n";
    return 0;
}