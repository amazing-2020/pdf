#include <stdio.h>

int main(void) {
    int x,y,z,t;
    printf("PLease enter tree numbers \n");
    scanf("%d%d%d", &x, &y, &z);
    if (x>y) {
        t=x;
        x=y;
        y=t;
    }
    if (x>z) {
        t=z;
        z=x;
        y=t;
    }
    if (y>z) {
        t=y;
        y=z;
        x=t;
    }

    printf("Sort from small to large %d<%d<%d \n", x, y, z);

    return 0;
}