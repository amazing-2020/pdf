#include <iostream>
struct CandyBar {
    std::string brand;
    double weight;
    int calorie;
};

int main()
{
    using namespace std;
    CandyBar arr[3] = {
            {"tangguo1", 123.45, 789456},
            {"meiwei", 456.2, 74159},
            {"beautiful", 753.23, 95123}
    };
    for (int i = 0; i < 3; ++i) {
        cout << "Brand: " << arr[i].brand << '\n'
             << "Weight: " << arr[i].weight << '\n'
             << "Calorie: " << arr[i].calorie << endl;
    }
}