#include <stdio.h>

int main() {
    int int_1 = 10;
    int int_2 = 6;
    float float_1 = 1.5f;
    float float_2 = 3.2f;
    char char_1 = 'a';
    double result = (int_1 + char_1) - float_1 + float_2 * int_2;
    printf("%.2f\n", result);
    return 0;
}
