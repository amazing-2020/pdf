#include <stdio.h>

int main(void) {
    int a, b;
    for (b=13; b*b-(b-1)*(b-1)<=168; b++) {//如果你不知道第一个大于168的平方数，可以设置b=1;
        for (a=0; a<b; a++) {
            if (b*b-a*a==168) {
                printf("%d  ", a*a-100);
            }
        }
    }

    return 0;
}