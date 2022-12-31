#include <iostream>
int main()
{
    using namespace std;
    wchar_t title[] = L"Chief Astrogator";
    char16_t name[] = u"Felonia Ripova";// how to out put them ?
    char32_t car[] = U"Humber Super Snipe"; //
    cout << R"(Jim "King" Tutt uses "\n" instead od endl.)" << '\n';
    cout << title << '\n' << name << '\n' << car << endl;
    printf("%ls %s %us\n", title, name, car);
    return 0;
}