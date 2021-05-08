#include <iostream>
using namespace std;

const int offset = 105;
const int maxSize = 100;

template <typename T>
void BucketSort(T arr[], int n);
template <typename T>
void Print(T arr[], int n);

int main(int argc, char * argv[]) {
    int n, i, arr[maxSize];

    cout << "请输入要排序的个数: ";
    cin >> n;
    srand((int)time(NULL));
    for (i=0; i<n; i++) {
        arr[i] = rand() % 100;
    }
    cout << "排序前";
    Print(arr, n);
    BucketSort(arr, n);
    std::cout << "排序后：";
    Print(arr, n);

    return 0;
}

template <typename T>
void BucketSort(T arr[], int n) {
    int i, j;
    T buckets[offset];

    for (i=0; i<offset; i++) {
        buckets[i] = 0;
    }
    for (i=0; i<n; i++) {
        buckets[arr[i]]++;
    }
    for (i=0, j=0; i<offset; i++) {
        while (buckets[i]>0) {
            arr[j]=i;
            buckets[i]--;
            j++;
        }
    }
}

template <typename T>
void Print(T arr[], int n) {
    int i;

    for (i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}