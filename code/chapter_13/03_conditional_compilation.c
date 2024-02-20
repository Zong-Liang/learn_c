#include <stdio.h>

#define NUM_1 50

#define NUM_2 100

int main() {
    int i = 0;
#if NUM_1 > 50
    i++;
#elif NUM_1 == 50
    i = i + 50;
#else
    i--;
#endif
    printf("%d\n", i);

#ifdef NUM_2
    printf("%d\n", NUM_2);
#endif

#undef NUM_2

#ifndef NUM_2
    printf("NUM_2 is not defined!\n");
#endif

    printf("the current line is %d\n", __LINE__);
    printf("the current file is %s\n", __FILE__);
}
