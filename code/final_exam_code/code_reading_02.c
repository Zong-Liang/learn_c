#include <stdio.h>

int main() {
    int i, j, s = 0;
    for (i = 1; i <= 5; i++)
        for (j = 1; j <= i; j++)
            s = s + 2;
    printf("s=%d\n", s);
}
