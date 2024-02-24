#include <stdio.h>

int main() {
    int sum_1 = 0, sum_2 = 0;

    for (int i = 1; i <= 10; i++) {
        sum_1 += i;
        sum_2 += i * i;
    }
    
    printf("Sum: %d\n", sum_1 + sum_2);

    return 0;
}
