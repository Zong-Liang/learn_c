#include <stdio.h>

int main() {
    int i = 1;
    while (i < 10) {
        if (i == 2) {
            i++;
            continue;
        }
        
        for (int j = 1; j < 10; ++j) {
            printf("%d\t", j);
        }
        printf("\n");
        i++;

        if (i == 9) {
            break;
        }
    }
}
