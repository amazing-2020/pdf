#include <iostream>
#include <array>

int main()
{
    using namespace std;

    char actor[30];
    short betsie[100];
    float chuck[13];
    long double diapsea[64];

    array<char, 30> actor2;
    array<short, 100> betsie2;
    array<float, 13> chuck2;
    array<long double, 64> diapsea2;

    int p3[5] = {1, 3, 5, 7, 9};

    int even;
    even = p3[0] + p3[4];

    float ideas[3] = {0, 1, 2};
    cout << ideas[1] << even;

    char str6[13] = "cheeseburger";
    string str7 = "Waldorf Salad";

    struct fish {
        char type[100];
        int weight;
        float length;
    };

    fish v9 = {"Cyprinus carpio", 200, 300};

    return 0;
}