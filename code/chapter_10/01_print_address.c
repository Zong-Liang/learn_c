#include <stdio.h>

int main() {
    int i_1 = 10;
    int *i_p = &i_1;
    printf("%d\n", i_1);
    printf("%p\n", (void *)i_p);
    i_p++;
    printf("%p\n", (void *)i_p);
    printf("%d\n", *i_p);
}
