#include <iostream>
#include <fstream>
const int size_name = 60;
struct group {
    char name[size_name];
    double donation;
};
int main()
{
    using namespace std;
    const char * filename = "donation.txt";
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int n, count = 0;
    group * pg;

    (inFile >> n).get();
    pg = new group[n];
    int i = 0;
    while (inFile.good())
    {
        inFile.getline(pg[i].name, size_name);
        (inFile >> pg[i].donation).get();
        i++;
    }

    cout << "Grand Patrons\n";
    for (int i = 0; i < n; ++i) {
        if (pg[i].donation > 10000)
        {
            cout << pg[i].name << "\t$" << pg[i].donation << "\n";
            count++;
        }
    }
    if (count == 0)
        cout << "none\n";
    count = 0;
    cout << "Patrons\n";
    for (int i = 0; i < n; ++i) {
        if (pg[i].donation < 10000)
        {
            cout << pg[i].name << "\t$" << pg[i].donation << "\n";
            count++;
        }
    }
    if (count == 0)
        cout << "none\n";
    delete[] pg;
    inFile.close();
    return 0;
}