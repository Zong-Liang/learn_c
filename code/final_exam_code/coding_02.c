#include <stdio.h>

int main() {
    int sum_1 = 0;
    int sum_2 = 0;

    // 计算第一个和式的值
    for (int i = 1; i <= 10; i++) {
        sum_1 += i;
    }

    // 计算第二个和式的值
    for (int i = 1; i <= 10; i++) {
        sum_2 += i * i;
    }

    // 输出两个和的和
    printf("Sum: %d\n", sum_1 + sum_2);

    return 0;
}
