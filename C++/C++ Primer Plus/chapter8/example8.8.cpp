#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void fill_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
    ofstream fout;
    const char * data = "ep-data.txt";
    fout.open(data);
    if (!fout.is_open())
    {
        cout << "Can't open " << data << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;//物鏡
    cout << "Enter the facal length of your "
            "telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    for (int i = 0; i < LIMIT; ++i) {
        cout << "Experience #" << i + 1 << ": ";
        cin >> eps[i];
    }
    fill_it(fout, objective, eps, LIMIT);
    fill_it(cout, objective, eps, LIMIT);
    return 0;
}

void fill_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.1. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; ++i)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo / fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}