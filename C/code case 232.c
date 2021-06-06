#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c);

int main(void) {
    int a, b, c;

    printf("Input the value of a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Before exchange: \n");
    printf(" a = %d \n b = %d \n c = %d \n", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("After exchange: \n");
    printf(" a = %d \n b = %d \n c = %d \n", a, b, c);

    return 0;
}

void cyclicSwap(int *a, int *b, int *c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}//c -> b, b -> a, a -> c