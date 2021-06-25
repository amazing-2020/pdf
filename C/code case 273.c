#include <stdio.h>

int IsLeap(int year) {
    if ((year%4==0&&year%100!=0) || (year%400==0)) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int monthday[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},
                          {0,31,29,31,30,31,30,31,31,30,31,30,31}};
    int year, month, day;
    int sum=0;
    printf("Please enter the year,month,and the day in format:year,month,day"\
    "(2015,12,10) \n");
    scanf("%d,%d,%d", &year, &month, &day);

    if (IsLeap(year)) {
        for (int i=0; i<month; i++) {
            sum += monthday[1][i];
        }
    } else {
        for (int i=0; i<month; i++) {
            sum += monthday[0][i];
        }
    }

    sum += day;
    printf("This is the %d day of the year. \n", sum);

    return 0;
}