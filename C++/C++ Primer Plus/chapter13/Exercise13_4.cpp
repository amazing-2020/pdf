// compile with port.cpp
#include <iostream>
#include "port.h"
int main()
{
    using namespace std;
    Port one("Gallo", "tawny", 20);
    VintagePort two("test", 200,"The Noble", 2003);

    one.Show();
    cout << one << endl;
    two.Show();
    cout << two << endl;
    return 0;
}