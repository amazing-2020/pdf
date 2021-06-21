#include <stdio.h>
int main(void) {
    int i, j, m, n, x;
    for (i=2; i<=160/2; i=i+2) {
        if (168%i == 0) {
            j = 168/i;
            if (i>j && (i+j)%2==0) {
                m = (i+j)/2;
                n = (i-j)/2;
                x = n*n - 100;
                printf("%d + 100 = %d*%d \n", x, n, n);
                printf("%d + 268 = %d*%d \n", x, m ,m);
            }
        }
    }

    return 0;
}
/*x+100=n^2, x+100+168=m^2,(m+n)(m-n)=168, i=m+n, j=m-n
  --->i*j=168, i%2=0, j%2=0
*/