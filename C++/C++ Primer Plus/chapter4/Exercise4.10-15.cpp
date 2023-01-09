#include <iostream>
#include <vector>
#include <cstring>
int main()
{
    using namespace std;

    enum Response {No, Yes, Maybe};
    Response value = Yes;
    cout << value << endl;

    double ted = 1123.04;
    double  * pt = &ted;
    cout << *pt << endl;

    float treacle[10] = {1.001, 2.002, 3.003, 4.001, 5.005, 6.006, 7.007, 8.008, 9.009, 56.2};
    float * ptre = treacle;
    cout << *ptre << " " << *(ptre+9) << endl;

    int n;
    cout << "Enter a positive digit: ";
    cin >> n;
    int arr13[n];
    vector<int> arr13_(n);

    cout << (int *)"Home of the jolly bytes" << endl;

    struct fish {
        char type[100];
        int weight;
        float length;
    };
    fish * pfish = new fish;
    strcpy(pfish->type, "liyu");
    pfish->length = 456;
    pfish->weight = 123;
    cout << pfish->type << " " << pfish->length << " " << pfish->weight << endl;

    return 0;
}