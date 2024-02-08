#include <stdio.h>

int main() {
    signed int i_1 = 2;
    printf("%d\n", i_1);
    printf("%i\n", i_1);

    unsigned int i_2 = 4;
    printf("%u\n", i_2);

    unsigned int i_3 = 0123;
    printf("%o\n", i_3);
    printf("%d\n", i_3);

    unsigned int i_4 = 0x12c;
    printf("%x\n", i_4);
    printf("%X\n", i_4);
    printf("%d\n", i_4);

    char c_1 = 'a';
    printf("%c\n", c_1);
    printf("%d\n", c_1);

    char c_arr[10] = "hello c!";
    printf("%s\n", c_arr);

    float f_1 = 0.0054f;
    printf("%f\n", f_1);
    printf("%e\n", f_1);
    printf("%g\n", f_1);
    printf("*%10.3f\n", f_1);
    printf("%-10.3f*\n", f_1);

    return 0;
}
