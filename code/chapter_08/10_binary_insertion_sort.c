#include <stdio.h>

void BinaryInsertionSort(int arr[], int n) {
    int i, j, key, low, high, mid;
    for (i = 1; i < n; i++) {
        key = arr[i];
        low = 0;
        high = i - 1;

        // 使用二分查找找到插入位置
        while (low <= high) {
            mid = (low + high) / 2;
            if (key < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        // 将大于 key 的元素都向右移动一个位置
        for (j = i - 1; j >= low; j--) {
            arr[j + 1] = arr[j];
        }
        arr[low] = key;
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

    BinaryInsertionSort(arr, n);

    printf("排序后的数组: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
