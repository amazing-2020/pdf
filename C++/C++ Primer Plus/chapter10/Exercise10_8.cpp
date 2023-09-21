// compile with list.cpp
#include <iostream>
#include "list.h"

void show(Item &);
void add_score(Item &);

int main()
{
    {
        using std::cout;
        List x;
        Item items[7] = {{"Alice", 95.5, 1}, {"Bob", 87.3, 2},
                         {"Charlie", 79.8, 3}, {"David", 76.4, 4},
                         {"Eve", 72.1, 5}, {"Harry", 62.5, 8},
                         {"Ivy", 59.3, 9}};
        cout << x.isempty() << '\n';
        for (int i = 0; i < 7; ++i) {
            if (!x.add(items[i]))
                break;
        }
        cout << x.isempty() << " " << x.isfull() << '\n';
        x.visit(show);
        x.visit(add_score);
        cout << "\n";
        x.visit(show);
    }


    return 0;
}

void show(Item & i)
{
    using std::cout;
    cout << i.name << "\tscores: " << i.score << ", and the ranking is " << i.ranking << "\n";
}

void add_score(Item & i)
{
    if (i.score < 70)
        i.score += 5;
}