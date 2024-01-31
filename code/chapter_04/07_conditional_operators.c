#include <stdio.h>

int main() {
    int a = 6, b = 8;
    int max = 0;
    if (a > b) {
        max = a;
    }
    else {
        max = b;
    }
    //max = (a > b) ? a : b;
    printf("the max of a and b is %d", max);
}
