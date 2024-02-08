#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x > 15) printf("%d", x - 5);
    if (x > 10) printf("%d ", x);
    if (x > 5) printf("%d\n", x + 5);
}
