#include <iostream>
enum {red, orange, yellow, green, blue, violet, indigo};
int main()
{
    using namespace std;
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code) {
            case red    : cout << "Her lips are red.\n"; break;
            case orange: cout << "Her lips are orange.\n"; break;
            case yellow : cout << "Her lips are yellow.\n"; break;
            case green : cout << "Her lips are green.\n"; break;
            case blue   : cout << "Her lips are blue.\n"; break;
            case violet : cout << "Her lips are violet.\n"; break;
            case indigo : cout << "Her lips are indigo.\n"; break;
        }
        cout << "Enter color code (0-6): ";
        cin >> code;
    }
    cout << "Bye!\n";
    return 0;
}