#include <stdio.h>

int main() {
    char c_arr[12] = "hello_world";

    for (int i = 0; i < 12; ++i) {
        printf("%c\t", c_arr[i]);
    }
}
