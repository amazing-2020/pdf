#include <iostream>

using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;

    cout << "Enter a characters: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the"
                "g-key to quit: ";
        cin >> ch;
    }
    return 0;
}

void n_chars(char c, int n)
{
    while (n-- > 0)
        cout << c;
}