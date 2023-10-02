//compile with bank.cpp
#include <iostream>
#include "bank.h"

int main()
{
    Bank a1 = Bank("Mike John", "euriewi7897454", 9999);
    Bank a2("a", "b", 789.5);
    a1.show();
    a1.addMoney(78);
    a1.show();
    a2.show();
    a2.withdrawMoney(999);
    a2.show();
    return 0;
}