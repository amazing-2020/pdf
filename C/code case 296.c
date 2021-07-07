#include <stdio.h>

int main() {
    int n, count=1, num, i=2;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    num = n;
    while (i<num) {
        if (n%i==0) {
            if (count==1) {
                printf("%d = %d", n, i);
            } else {
                printf("*%d", i);
            }
            count++;
            n /= i;
        } else {
            i++;
        }
    }
    printf("\n");
    
    return 0;
}