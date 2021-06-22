#include <stdio.h>
#include <math.h>

int main(void) {
    int x, c1, c2, L, H;
    c1=100;
    c2=168;
    L = -c1;

    int i=0;
    for (i=1; i*i-(i-1)*(i-1)<=c2; ++i);
    H = i*i - (c1+c2);

    int j;
    double y, z;
    for (j=L; j<=H; ++j) {
        y = sqrt(j+c1);
        z = sqrt(j+c1+c2);
        if (y==(int)y && z==(int)z) {
            printf("y = %2d z = %d\n", (int)y, (int)z);
        }
    }

    return 0;
}