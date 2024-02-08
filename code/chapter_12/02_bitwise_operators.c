#include <stdio.h>

int main() {
    int a = 0, b = 1;
    // AND
    printf("%d\n", a & b);
    // OR
    printf("%d\n", a | b);
    // XOR
    printf("%d\n", a ^ b);
    // NOT
    printf("%d\n", !b);

    printf("%d\n", b << 1);

    printf("%d\n", b >> 1);
}
