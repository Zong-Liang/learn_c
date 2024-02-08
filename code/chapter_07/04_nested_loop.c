#include <stdio.h>

int main() {
    int i = 1;
    while (i < 5) {
        if (i == 2) {
            i++;
            continue;
        }

        for (int j = 1; j < 3; ++j) {
            printf("%d\t", j);
        }
        printf("\n");
        i++;

        if (i == 4) {
            break;
        }
    }
}
