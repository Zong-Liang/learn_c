#include <stdio.h>

int main() {
    // if...else
    _Bool is_rain = 1;
    if (is_rain) {
        printf("please take an umbrella!\n");
    }
    else {
        printf("it's a good day!");
    }

    // else if
    int current_time;
    printf("please input current time: \n");
    scanf_s("%d", &current_time);
    if (current_time > 0 && current_time < 12) {
        printf("it's morning!\n");
    }
    else if (current_time > 12 && current_time < 14) {
        printf("it's noon!\n");
    }
    else if (current_time > 14 && current_time < 18) {
        printf("it's afternoon!\n");
    }
    else if (current_time > 18 && current_time < 24) {
        printf("it's night!\n");
    }
    else {
        printf("the time you input must within 0~24!\n");
    }

    // nested if
    int current_day;
    printf("please input current day: \n");
    scanf_s("%d", &current_day);
    if (current_day >= 1 && current_day <= 7) {
        if (current_day >= 1 && current_day <= 5) {
            printf("today is weekday, please work hard!\n");
        }
        else {
            printf("today is weekend, please have a good rest!\n");
            if (current_day == 6) {
                printf("today is saturday, we're going to the beach to play!\n");
            }
            if (current_day == 7) {
                printf("today is sunday, we're going shopping!\n");
            }
        }
    }
}
