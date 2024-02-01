#include <stdio.h>

extern int SubstractTwoNum(int num_1, int num_2);

int main() {
    int result = SubstractTwoNum(10, 4);
    printf("%d\n", result);
}
