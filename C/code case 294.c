#include <stdio.h>

void Positive_integer_disintegrant(int n) {
    int i=2, m;
    m = n;
    printf("%d = ", n);
    while (i <= (n/2)) {
        if (m%i == 0) {
            printf("%d", i);
            m = m/i;
            if (m != 1) {
                printf(" * ");
            }
        }
        if (m%i != 0) {
            i++;
        }
    }
    
}

int main() {
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    Positive_integer_disintegrant(n);
    printf("\n");
    return 0;
}