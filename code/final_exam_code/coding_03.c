#include <stdio.h>

// 冒泡排序函数
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // 交换arr[j]和arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[10];

    // 从键盘输入10个整数
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    // 调用冒泡排序函数对数组a进行排序
    bubble_sort(a, 10);

    // 输出排序后的数组
    printf("Sorted array in descending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
