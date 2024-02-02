#include <stdio.h>

enum Week {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY,
};

enum Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER,
};

int main() {
    enum Week today = WEDNESDAY;
    if (today == 2) {
        printf("Wednesday\n");
    }

    enum Season current_season = SUMMER;
    switch (current_season) {
        case SPRING:
            printf("SPRING\n");
            break;
        case SUMMER:
            printf("当前季节是夏天。\n");
            break;
        case AUTUMN:
            printf("SUMMER\n");
            break;
        case WINTER:
            printf("WINTER\n");
            break;
        default:
            printf("unknown season\n");
            break;
    }
    return 0;
}
