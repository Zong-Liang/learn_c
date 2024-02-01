#include <stdio.h>

int global_i = 6;

void PrintValue() {
    printf("%d\n", global_i);
    ++global_i;
}

int main() {
    PrintValue();
    printf("%d\n", global_i);
}
