#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2, *p;
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b) {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    printf("%d %d\n", a, b);
    printf("%d %d\n", *p1, *p2);
}
