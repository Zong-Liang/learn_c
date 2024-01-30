#include <stdio.h>

int main() {
    float f_1 = 3.14f;
    int num_1 = f_1;// Clang-Tidy: Narrowing conversion from 'float' to 'int'
    int num_2 = (int)f_1;
    return 0;
}
