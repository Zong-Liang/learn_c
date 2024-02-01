#include <stdio.h>

void SwapValue1(int num_1, int num_2) {
    int temp = 0;
    temp = num_1;
    num_1 = num_2;
    num_2 = temp;
}

void SwapValue2(int *num_1, int *num_2) {
    int temp = 0;
    temp = *num_1;
    *num_1 = *num_2;
    *num_2 = temp;
}

int main() {
    int num_1 = 6, num_2 = 9;
    printf("num_1: %d | num_2: %d\n", num_1, num_2);
    SwapValue1(num_1, num_2);
    printf("num_1: %d | num_2: %d\n", num_1, num_2);

    int *num_1_p = &num_1, *num_2_p = &num_2;
    printf("num_1: %d | num_2: %d\n", num_1, num_2);
    SwapValue2(num_1_p, num_2_p);
    printf("num_1: %d | num_2: %d\n", num_1, num_2);
}
