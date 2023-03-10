#include <iostream>
#include <cstring>

template<typename T>
T maxn(T a[], int b);

template <> const char * maxn(const char **arr, const int n);

int main()
{
    using namespace std;
    int arr1[6] = {2343,2423,432432,4324, 324, 324};
    double arr2[4] = {324.324, 324.32432, 2343.3401, 0.25};
    // 不能使用arr3[5][70]、*arr[70]、**arr
    const char *arr3[] = {
            "To be both a speaker of words and a doer of deeds.",
            "Variety is the spice of life.",
            "Bad times make a good man.",
            "There is no royal road to learning.",
            "Doubt is the key to knowledge."
    };
    cout << maxn(arr1, 6) << endl;
    cout << maxn(arr2, 4) << endl;
    const char * ptr = maxn(arr3, 5);
    cout << ptr << endl;
    return 0;
}

template<typename T>
 T maxn(T a[], int b)
{
    T num = a[0];
    for (int i = 1; i < b; ++i) {
        if (a[i] > num)
            num = a[i];
    }
    return num;
}

template <> const char * maxn(const char **arr, const int n)
{
    const char * addr = arr[0];
    for (int i = 1; i < n; ++i) {
        if (strlen(addr) < strlen(arr[i]))
            addr = arr[i];
    }
    return addr;
}