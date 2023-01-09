#include <iostream>
struct pizza {
    std::string brand;
    int diameter;
    double weight;
};

int main()
{
    using namespace std;
    pizza data;
    cout << "Enter the name of the company: ";
    getline(cin, data.brand);
    cout << "Enter the diameter per pizza: ";
    cin >> data.diameter;
    cout << "Enter the weight per pizza: ";
    cin >> data.weight;
    cout << data.brand << " produce pizza: " << data.diameter << " inches, " << data.weight << " Kg." << endl;
    return 0;
}