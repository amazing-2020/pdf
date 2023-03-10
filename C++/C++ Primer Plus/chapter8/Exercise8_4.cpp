#include <iostream>

using namespace std;
#include <cstring>
struct stringy {
    char * str;
    int ct;
};
void set(stringy & str1, const char * str2);
void show(const char * s, const int n = 1);
void show(const stringy & s, const int n = 1);

int main()
{
    using namespace std;
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    cout << beany.str << endl;
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & str1, const char * str2)
{
    str1.ct = strlen(str2);
    str1.str = new char[str1.ct+1];
    strncpy(str1.str, str2, str1.ct);
    str1.str[str1.ct] = '\0';
}

void show(const char * s, const int n)
{
    for (int i = 0; i < n; ++i)
        cout << s << endl;
}

void show(const stringy & s, const int n)
{
    for (int i = 0; i < n; ++i)
        cout << s.str << endl;
}