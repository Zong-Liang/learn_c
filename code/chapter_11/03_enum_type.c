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
        case 0:
            printf("SPRING\n");
            break;
        case 1:
            printf("SUMMER\n");
            break;
        case 2:
            printf("SUMMER\n");
            break;
        case 3:
            printf("WINTER\n");
            break;
        default:
            printf("unknown season\n");
            break;
    }
    return 0;
}
