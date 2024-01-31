/*
 * +
 * -
 * *
 * /
 * %
 * ++
 * --
 */

#include <stdio.h>

int main() {
    int int_1 = 6, int_2 = 8;
    printf("addition: %d\n", int_2 + int_1);
    printf("subtraction: %d\n", int_2 - int_1);
    printf("multiplication: %d\n", int_2 * int_1);
    printf("division: %d\n", int_2 / int_1);
    printf("modulo_arithmetic: %d\n", int_2 % int_1);
    int_1++;
    printf("after self_increment: %d\n", int_1);
    int_2--;
    printf("after self_decrement: %d\n", int_2);
    return 0;
}
