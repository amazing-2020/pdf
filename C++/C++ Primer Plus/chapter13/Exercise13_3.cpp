// compile with dma2.cpp
#include <iostream>
#include "dma2.h"
int main()
{
    using std::cout;
    using std::endl;

    DMA wine("good", 9);
    baseDMA shirt("Protabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying DMA objects:\n";
    cout << wine << endl;
    cout << "Displaying baseDMA objects:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA objects:\n";
    cout << balloon << endl;
    cout << "Displaying hasDMA objects:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy:\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    return 0;
}