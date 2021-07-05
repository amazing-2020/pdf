#include <stdio.h>
#include <math.h>

void fun() {
    int i=0;
    for (i=100; i<=999; i++) {
        int a = i/100, b = i%100/10, c = i%10;
        double temp = pow(a,3)+pow(b,3)+pow(c,3);
        if (temp==i) {
            printf("%d \n", i);
        }
    }
}
int main() {
    fun();
    return 0;
}