#include <stdio.h>

#define GREETING "Good Morning!"
#define MIX(a, b) ((a + b) * (a - b))

int main() {
    printf(GREETING);
#undef GREETING
    //    printf(GREETING);
    
    int a = 6, b = 4;
    printf("%d\n", MIX(a, b));
}
