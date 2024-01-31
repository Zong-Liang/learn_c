#include <stdio.h>

void AddOne() {
    auto int int_1 = 1;
    int_1 = int_1 + 1;
    printf("int_1: %d\n", int_1);
}

int main() {
    printf("first call:\n");
    AddOne();
    printf("second call:\n");
    AddOne();
    return 0;
}
