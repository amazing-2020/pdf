#include <iostream>
struct CandyBar {
    std::string brand;
    double weight;
    int calorie;
};
int main()
{
    using namespace std;
    CandyBar snack = {
            "tangguo", 120.23, 123456
    };
    cout << "Brand: " << snack.brand << '\n'
         << "Weight: " << snack.weight << '\n'
         << "Calorie: " << snack.calorie << endl;

    return 0;
}