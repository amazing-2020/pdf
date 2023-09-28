#include <iostream>
#include "stonewt1.h"
int main()
{
    using std::cout;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int (poppins)<< " pounds.\n";
    // exercise11.1
    Stonewt temp;
    temp = poppins * 5.0;
    temp.show_stn();
    return 0;
}