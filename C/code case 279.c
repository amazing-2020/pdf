#include <stdio.h>
//void InsSort(int a[], int n);
int main() {
    int a[4];
    void InsSort(int a[], int n);
    printf("Please enter the num: ");
    scanf("%d%d%d", a+1, a+2, a+3);
    InsSort(a, 4);
    printf("%d,%d,%d \n", *(a+1), *(a+2), *(a+3));

    return 0;
}

void InsSort(int a[], int n) {
    int i, j;
    for (i=2; i<=n; i++) {
        a[0] = a[i];
        j=i;
        while (a[j-1]>a[i]) {
            a[j]=a[j-1];
            j--;
        }
        a[j] = a[0];
    }
}