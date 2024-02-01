#include <stdio.h>

int main() {
    // switch case
    int current_day;
    printf("please input current day: \n");
    scanf_s("%d", &current_day);
    switch (current_day) {
        case 1:
            printf("Monday!\n");
            break;
        case 2:
            printf("Tuesday!\n");
            break;
        case 3:
            printf("Wednesday!\n");
            break;
        case 4:
            printf("Thursday!\n");
            break;
        case 5:
            printf("Friday!\n");
            break;
        case 6:
            printf("Saturday!\n");
            break;
        case 7:
            printf("Sunday!\n");
            break;
        default:
            printf("the day you input must within 1~7!\n");
    }

    switch (current_day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("weekday!\n");
            break;
        case 6:
        case 7:
            printf("weekend!\n");
            break;
        default:
            printf("the day you input must within 1~7!\n");
    }
}
