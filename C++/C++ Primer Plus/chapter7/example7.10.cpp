#include <iostream>
char * build_str(char c, int n);
int main()
{
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = build_str(ch, times);
    cout << ps << endl;
    delete[] ps;
    ps = build_str('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete[] ps;
    return 0;
}

char * build_str(char c, int n)
{
    char * pstr = new char[n+1];
    pstr[n] = '\0';
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}