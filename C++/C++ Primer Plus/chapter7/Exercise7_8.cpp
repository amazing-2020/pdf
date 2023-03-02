#include <iostream>
#include <string>
const int Seasons = 4;
const char * Snames[Seasons] =
        {"Springs", "Summer", "Fall", "Winter"};
void fill_1(double * pa);
void show_1(double * da);
struct Cost {
    double expenses[Seasons];
};
void fill_2(Cost * da);
void show_2(Cost da);
int main()
{
    double expenses[Seasons];
    fill_1(expenses);
    show_1(expenses);

    Cost data;
    fill_2(&data);
    show_2(data);
    return 0;
}

void fill_1(double * pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show_1(double * da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i)
    {
        cout << Snames[i] << ": ￥" << da[i] << endl;
        total += da[i];
    }
    cout << "Total expenses: ￥" << total << endl;
}


void fill_2(Cost * da)
{
    using namespace std;
    for (int i = 0; i < Seasons; ++i) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> da->expenses[i];
    }
}

void show_2(Cost da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i)
    {
        cout << Snames[i] << ": ￥" << da.expenses[i] << endl;
        total += da.expenses[i];
    }
    cout << "Total expenses: ￥" << total << endl;
}