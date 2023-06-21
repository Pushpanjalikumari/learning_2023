#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimeDifference(struct Time start, struct Time end) {
    struct Time difference;
    int startSeconds, endSeconds, diffSeconds;

    startSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    endSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

    diffSeconds = endSeconds - startSeconds;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, timeDifference;

    printf("Enter the start time (hh:mm:ss): ");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hh:mm:ss): ");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    timeDifference = getTimeDifference(startTime, endTime);

    printf("The difference is: %02d:%02d:%02d\n", timeDifference.hours, timeDifference.minutes, timeDifference.seconds);

    return 0;
}