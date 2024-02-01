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

int main() {
    enum Week today = WEDNESDAY;
    if (today == 2) {
        printf("today is Wednesday\n");
    }

    return 0;
}
