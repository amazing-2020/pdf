// compile with stack.cpp
#include <iostream>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po = 0;
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
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
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
                           cout << "PO #" << po << " popped!\n";
                      }
                      break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    Stack show(st);
    Stack show2;

    show.pop(po);
    cout << "show PO #" << po << " popped!\n";

    show2 = st;
    show2.pop(po);
    cout << "show2 PO #" << po << " popped!\n";

    cout << "Bye!\n";
    return 0;
}