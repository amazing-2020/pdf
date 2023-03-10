#include <iostream>
#include <cstring>
struct CandyBar {
    char * brand_name;
    double weight;
    int calorie;
};
using namespace std;

void set_value(CandyBar & ca, const char * str = "Millennium Munch", const double we = 2.85, const int cal = 350);
void show(const CandyBar & ca);

int main()
{
    CandyBar love;
    //void set_value(CandyBar & ca, const char * str = "Millennium Munch",  double we = 996,  int cal = 350);
    // if use it, the default value of it is this
    set_value(love);
    show(love);
    delete[] love.brand_name;

    CandyBar darling;
    set_value(darling, "My darling", 5.20, 1314);
    show(darling);
    delete[] darling.brand_name;
    return 0;
}

void set_value(CandyBar & ca, const char * str, const double we, const int cal)
{
    int n = strlen(str);
    ca.brand_name = new char[n+1];
    strncpy(ca.brand_name, str, n);
    ca.brand_name[n] = '\0';
    ca.weight = we;
    ca.calorie = cal;
}

void show(const CandyBar & ca)
{
    cout << ca.brand_name << "'s candy weight " << ca.weight << "\u0067, its calorie is " << ca.calorie << endl;
}