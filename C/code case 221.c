#include <stdio.h>

int main(void) {
    int i, n;
    float arr[100];

    printf("Enter the number of in input elements:(1~100): ");
    scanf("%d", &n);

    for (i=0; i<n; ++i) { 
        printf("Enter the number %d: ", i);
        scanf("%f", &arr[i]);
    }
    for (i=1; i<n; ++i) {
        if (arr[0]<arr[i]) {
            arr[0] = arr[i];
        }
    }    
    printf("The largest element is %.2f \n", arr[0]);
}//如果使用 %d 进行解释，则被截断为 1;