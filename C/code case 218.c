#include <stdio.h>

int main(void) {
    int n, i;
    float num[100], sum=0.0, average;

    printf("Enter the number of input elements: ");
    scanf("%d", &n);

    while (n>100 || n<=0) {
        printf("Error! The number needs to be between 1 and 100. \n");
        printf("re-enter: ");
        scanf("%d", &n);    
    }
    for (i=0; i<n; ++i) {
        printf("%d, Enter the number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    
    average = sum/n;
    printf("Average = %.2f \n", average);

    return 0;
}