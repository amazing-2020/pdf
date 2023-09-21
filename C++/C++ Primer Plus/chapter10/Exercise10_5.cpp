// compile with stack05.cpp
#include <iostream>
#include <cctype>
#include "stack05.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    Item po;
    double total = 0;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a': cout << "Enter a PO fullname to add: ";
                      cin.getline(po.fullname, 35);
                      cout << "Enter a PO payment to add: ";
                      cin >> po.payment;
                      cin.get();
                      if (st.isfull())
                          cout << "stack is already full";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "stack is already empty\n";
                      else {
                          st.pop(po);
                          total += po.payment;
                          cout << "PO #" << po.fullname << " popped!\n";
                          cout << "Till now, " << total << " dollars paid\n";
                      }
                      break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye!\n";
    return 0;
}