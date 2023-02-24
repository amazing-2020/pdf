#include <iostream>
const int strsize = 60;
struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    using namespace std;
    char ch;
    bop a[5] = {
            {"Mike John", "Senior Programmer", "C++", 0},
            {"Steve Jobs", "Apple CEO", "#40", 1},
            {"Bill Gates", "Software Architect", "Windows Bug", 1},
            {"Linus Benedict Torvalds", "Software Engineer", "Father of Linux", 0},
            {"Dennis MacAlistair Ritchie", "Computer scientist", "Father of C", 2}
    };

    cout << "Benevolent Order of Programmers report\n";
    cout << "a. display by name\tb.display by title\n"
         << "c. display by bopname\td.display by preference\n"
         << "q. quit\n";
    cout << "Enter your choice: ";
    while (cin.get(ch).get() && ch != 'q')
    {
        if (ch == 'a')
            for (int i = 0; i < 5; ++i) {
                cout << a[i].fullname << endl;
            }
        else if (ch == 'b')
            for (int i = 0; i < 5; ++i) {
                cout << a[i].title << endl;
            }
        else if (ch == 'c')
            for (int i = 0; i < 5; ++i) {
                cout << a[i].bopname << endl;
            }
        else if (ch == 'd')
            for (int i = 0; i < 5; ++i) {
                if (a[i].preference == 0)
                    cout << a[i].fullname << endl;
                else if (a[i].preference == 1)
                    cout << a[i].title << endl;
                else
                    cout << a[i].bopname << endl;
            }
        else
            cout << "Invalid input.\n";
        cout << "Next choice: ";
    }
    cout << "Bye!\n";
    return 0;
}