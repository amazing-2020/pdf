#include <stdio.h>
int main(void) {
    int number, i;

    printf("Emnter a integer: ");
    scanf("%d", &number);
    printf("The factor of %d are: \n", number);

    for (i=1; i<=number; ++i) {
        if (number%i==0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}