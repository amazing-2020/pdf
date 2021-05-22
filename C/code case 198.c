#include <stdio.h>
int main(void) {
    int blank, number, column, n;
    printf("Please enter the number of digital pyramid levels(less than 50): ");
    scanf("%d", &n);

    int count=0;
    int x=0;
    x = 2*n-1;
    while (x != 0) {
        x /= 10;
        ++count;
    }
    
    for (column=1; column<=n; column++) {
        for (blank=1; blank<(n-column)*(column+1)+count; blank++) {
            printf(" ");
        }
        for (number=column; number<(2*column); number++) {
            if (number< 10&&count != 1) {
                printf(" %d", number);
            } else {
                printf(" %d", number);
            }
        }

        for (number-=2; number>=column; number--) {
            if (number < 10&&count!=1) {
                printf(" %d", number);
            } else {
                printf(" %d", number);
            }
        }
        printf("\n");
    }

    return 0;
}