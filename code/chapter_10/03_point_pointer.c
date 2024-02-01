#include <stdio.h>

int main() {
    int i_1 = 10;
    int *i_p = &i_1;
    int **i_p_p_1 = &i_p;
    int ***i_p_p_2 = &i_p_p_1;
    printf("%d\n", 10);
    printf("%d\n", *i_p);
    printf("%d\n", **i_p_p_1);
    printf("%d\n", ***i_p_p_2);
}
