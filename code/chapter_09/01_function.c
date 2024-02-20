#include <stdio.h>

int AddTwoNum(int num_1, int num_2) {
    int result = num_1 + num_2;
    return result;
}

int main() {
    int result;
    AddTwoNum(9, 9);
    AddTwoNum(9, AddTwoNum(8, 8));
    result = AddTwoNum(6, 6);
    printf("%d\n", result);
    
    return 0;
}
