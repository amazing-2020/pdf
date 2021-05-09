#include <iostream>
using namespace std;

void printArray(int arr[], int length) {
    for (int i=0; i<length; ++i) {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int maxbit(int data[], int n) {
    int d=1;
    int p=10;
    for (int i=0; i<n; ++i) {
        while (data[i] >= p) {
            p *= 10;
            ++d;
        }
    }
    return d;
}

void radixsort(int data[], int n) {
    int d = maxbit(data, n);
    int tmp[n];
    int count[10];
    int i, j, k;
    int radix = 1;
    for (i=1; i<=d; i++) {
        for (j=0; j<10; j++) {
            count[j] = 0;
        }
        for (j=0; j<n; j++) {
            k = (data[j] / radix) % 10;
            count[k]++;
        }
        for (j=1; j<10; j++) {
            count[j]=count[j-1] + count[j];
        }
        for (j=n-1; j>=0; j--) {
            k = (data[j] / radix) % 10;
            tmp[count[k] - i] = data[j];
            count[k]--;
        }
        for (j=0; j<n; j++) {
            data[j] = tmp[j];
        }
        radix = radix*10;
    }
}

int main() {
    int arr[10] = {73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
    radixsort(arr, 10);
    printArray(arr, 10);
    return 0;
}//无法排列负数、0等，只对此数列有效