#include <stdio.h>
int AddTwoNum(int num_1, int num_2);

int main() {
    int result;
    result = AddTwoNum(6, 6);
    printf("%d\n", result);
}

int AddTwoNum(int num_1, int num_2) {
    int result = num_1 + num_2;
    return result;
}
