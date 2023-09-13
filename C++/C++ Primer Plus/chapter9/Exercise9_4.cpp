//compile with sales.cpp
#include "sales.h"
int main()
{
    using namespace SALES;

    Sales a = {0}, b = {0};
    const double data[12] = {104.52485443730872, 36.55548392215269, 497.6660990472802, 784.1097414053377,
                             815.1476849552953, 304.3383445480302, 659.3302758561088, 649.3359938002152,
                             511.5246053727797, 854.9076708973737, 970.9016236972908, 567.4936747118337};
    setSales(a);
    setSales(b,data,12);
    showSales(a);
    showSales(b);
    return 0;
}