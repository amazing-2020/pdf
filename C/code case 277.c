#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a>b && b>c);
    else {
        a = (b>c)? b:c;
    }
    printf("%d \n", a);

    return 0;
}