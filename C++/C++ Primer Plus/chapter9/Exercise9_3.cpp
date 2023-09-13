#include <iostream>
#include <cstring>
char * buffer[512];
struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    using namespace std;
    chaff * ar = new (buffer) chaff[2];
    strcpy(ar[0].dross, "hello");
    ar[0].slag = 89;
    strcpy(ar[1].dross, "world");
    ar[1].slag = 90;
    for (int i = 0; i < 2; ++i)
        cout << ar[i].dross << " have " << ar[i].slag << " pounds.\n";
    return 0;
}