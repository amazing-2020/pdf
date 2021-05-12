#include <stdio.h>

int main(void) {
    int low, high, i, flag;
    printf("Enter two integers: ");
    scanf("%d %d", &low, &high);

    printf("The prime between %d and %d", low, high);

    while (low < high) {
        flag=0;
        for (i=2; i<= low/2; ++i) {
            if (low%i == 0) {
                flag=1;
                break;
            }
        }
        if (flag==0) {
            printf("%5d*", low);
        }
        ++low;
    }

    printf("\n");
    return 0;
}