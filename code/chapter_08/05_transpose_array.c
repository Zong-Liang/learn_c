// transpose array
#include <stdio.h>

int main() {
    int arr_1[2][3] = {1, 2, 3, 4, 5, 6}, arr_1_transposed[3][2];
    printf("arr_1:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", arr_1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr_1_transposed[j][i] = arr_1[i][j];
        }
    }

    printf("arr_1_transposed:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", arr_1_transposed[i][j]);
        }
        printf("\n");
    }
}
