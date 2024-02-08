#include <stdio.h>

int main() {
    int n, a, b, c;
    for (a = 1; a <= 9; a++)
        for (b = 0; b <= 9; b++)
            for (c = 0; c <= 9; c++) {
                n = a * 100 + b * 10 + c;
                if (a * a * a + b * b * b + c * c * c == n)
                    printf("%d\n", n);
            }
}
