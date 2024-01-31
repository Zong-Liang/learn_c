#include <stdio.h>

extern int extern_int;

int main() {
    printf("%d\n", extern_int);
    return 0;
}
