#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    const int Foot_to_Inch = 12;
    const auto Kg_to_Pound = 2.2, Inch_to_Meter = 0.0254;
    int foots, inches;
    float weight;

    cout << "Enter your height,(foot inch): ";
    cin >> foots >> inches;
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Your BMI is " <<  (weight / Kg_to_Pound) / pow(((foots * Foot_to_Inch) + inches) * Inch_to_Meter, 2 ) << endl;
    return 0;
}