#include <iostream>
void simple();
int main()
{
    using namespace std;
    cout << "mail() will call the simple function:\n";
    simple();
    cout << "mail() is finished with the simple() function.\n";
    return 0;
}

void simple()
{
    using namespace std;
    cout << "I'm but a simple function.\n";
}