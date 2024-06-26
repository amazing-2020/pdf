#include <stdio.h>

struct TIME
{
    int seconds;
    int minutes;
    int hours;
};
void differenceBetweenTimePeriod(struct TIME t1,struct TIME t2, struct TIME *diff);

int main(void) {
    struct TIME startTime, stopTime, diff;

    printf("Enter the start time: \n");
    printf("Enter hours, minutes, seconds: ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time: \n");
    printf("Enter hours, minutes, seconds: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

    differenceBetweenTimePeriod(startTime, stopTime, &diff);

    printf("\nDifference: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf(" = %d:%d:%d \n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}

void differenceBetweenTimePeriod(struct TIME start,struct TIME stop, struct TIME *diff) {
    if (stop.seconds > stop.seconds) {
        --start.minutes;
        start.seconds += 60;
    }
    diff->seconds = start.seconds - stop.seconds;
    if (stop.minutes > start.minutes) {
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
