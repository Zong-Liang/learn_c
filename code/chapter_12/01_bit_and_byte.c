#include <stdio.h>

int main() {
    printf("size of char: %llu bytes\n", sizeof(char));
    printf("size of short: %llu bytes\n", sizeof(short));
    printf("size of int: %llu bytes\n", sizeof(int));
    printf("size of long: %llu bytes\n", sizeof(long));
    printf("size of long long: %llu bytes\n", sizeof(long long));
    printf("size of float: %llu bytes\n", sizeof(float));
    printf("size of double: %llu bytes\n", sizeof(double));
    printf("size of long double: %llu bytes\n", sizeof(long double));

    return 0;
}
