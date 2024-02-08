#include <stdio.h>
int prime(int m) {
    int i, flag;
    flag = 1;
    for (i = 2; i <= m - 1; i++) {
        if (m % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int n, judge;
    for (n = 3; n <= 200; n = n + 2) {
        judge = prime(n);
        if (judge == 1) printf("%-4d\n", n);
    }
}
