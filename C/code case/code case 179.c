#include <stdio.h>
#include <math.h>

int issushu(int k);
int main(void) {
    int n, count=0; 
    scanf("%d", &n);
    for (int i=n; i>3; i--) {
        if (issushu(i)) {
            if (issushu(i-2)) {
                count++;
            }
        }
    }
    printf("%d ", count);

    return 0;
}

int issushu(int k) {
    for (int i=2; i<sqrt(k)+1; i++) {
        if (k%i==0) {
            return 0;
        }
    }
    return 1;
}//质数的个数,但是存在bug