#include <stdio.h>

int main() {
    float f_1 = 3.14f;
    int i_1 = f_1;// Clang-Tidy: Narrowing conversion from 'float' to 'int'
    printf("i_1: %d\n", i_1);
    int i_2 = (int)f_1;
    printf("i_2: %d\n", i_2);
    int i_3 = 6;
    float f_2 = i_3;
    printf("f_2: %f\n", f_2);
    float f_3 = (float)i_3;
    printf("f_3: %f\n", f_3);
    return 0;
}
