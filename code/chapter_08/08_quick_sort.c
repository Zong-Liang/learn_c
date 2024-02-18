#include <stdio.h>

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int arr[], int low, int high) {
    int pivot = arr[high];// 选择最后一个元素作为基准
    int i = (low - 1);    // 小于基准的元素的最后一个索引

    for (int j = low; j <= high - 1; j++) {
        // 如果当前元素小于等于基准
        if (arr[j] <= pivot) {
            i++;                   // 小于基准的元素的个数增加
            Swap(&arr[i], &arr[j]);// 交换 arr[i] 和 arr[j]
        }
    }
    Swap(&arr[i + 1], &arr[high]);// 交换 arr[i+1] 和 arr[high]，使基准元素位于正确的位置
    return (i + 1);
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = Partition(arr, low, high);// 将数组分割成两部分
        QuickSort(arr, low, pi - 1);       // 对左侧部分进行快速排序
        QuickSort(arr, pi + 1, high);      // 对右侧部分进行快速排序
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

    QuickSort(arr, 0, n - 1);

    printf("排序后的数组: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
