#include <iostream>
void mice(void);
void action(void);
int main()
{
    mice();
    mice();
    action();
    action();
    return 0;
}
void mice(void)
{
    using namespace std;
    cout << "Three blind mice" << endl;
}
void action(void)
{
    using namespace std;
    cout << "See how they run" << endl;
}