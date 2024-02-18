#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // 遍历数组
    for (i = 0; i < n - 1; i++) {
        // 找到未排序部分的最小元素
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // 将找到的最小元素与当前位置的元素交换
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {9, 6, 15, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("排序后的数组: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
