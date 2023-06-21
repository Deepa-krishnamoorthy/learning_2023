#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;
    int t1Seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2Seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int differenceSeconds = t2Seconds - t1Seconds;
    diff.hours = differenceSeconds / 3600;
    differenceSeconds %= 3600;
    diff.minutes = differenceSeconds / 60;
    differenceSeconds %= 60;
    diff.seconds = differenceSeconds;
    return diff;
}

int main() {
    struct Time time1, time2, difference;
    
    printf("Enter the first time period:\n");
    printf("Hours: ");
    scanf("%d", &time1.hours);
    printf("Minutes: ");
    scanf("%d", &time1.minutes);
    printf("Seconds: ");
    scanf("%d", &time1.seconds);
    
    printf("\nEnter the second time period:\n");
    printf("Hours: ");
    scanf("%d", &time2.hours);
    printf("Minutes: ");
    scanf("%d", &time2.minutes);
    printf("Seconds: ");
    scanf("%d", &time2.seconds);
    
    difference = calculateTimeDifference(time1, time2);
    
    printf("\nDifference between the two time periods: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);
    
    return 0;
}
