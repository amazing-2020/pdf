// compile with person.cpp
#include <iostream>
#include "person.h"
int main()
{
    using namespace std;

    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.show();
    cout << endl;
    one.FormalShow();
    two.show();
    cout << endl;
    two.FormalShow();
    three.show();
    cout << endl;
    three.FormalShow();
    return 0;
}