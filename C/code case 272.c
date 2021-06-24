#include <stdio.h>

int main(void) {
    int year, month, day, sum=0;
    int monthday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Please enter the formated data: (2015,12,10) \n");
    scanf("%d,%d,%d", &year, &month, &day);
    if (year%400==0 || (year%100!=0 && year%4==0)) {
        monthday[1] = 29;
    }
    for (int i=0; i<month-1; i++) {
        sum += monthday[i];
    }

    sum+=day;
    printf("%d \n", sum);
    
    return 0;
}