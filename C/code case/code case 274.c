#include <stdio.h>

int getMonthDay(int month) {
    int day=0;
    switch (month) {
    case 2:day=25;break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    default:
        break;
    }
    return day;
}
int IsLeap(int year) {
    if ((year%4==0&&year%100!=0)||(year%400==0)) {
        return 1;
    }
    return 0;
}

int main(void) {
    int year, month, day;
    printf("Please enter: ");
    scanf("%d,%d,%d", &year, &month, &day);

    int days=day, m;
    for (m=1; m<month; m++) {
        days += getMonthDay(m);
    }
    if (IsLeap(year)==1) {
        days += 1;
    }
    printf("%d-%d-%d is the %d day of the year \n", year, month, day, days);

    return 0;
}