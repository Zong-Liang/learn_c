#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Dynamically allocate an array of 5 integers
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    // Print the array content
    printf("Array content: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate the array to size 10
    size = 10;
    int *temp = (int *)realloc(arr, size * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);// Free the previously allocated memory before exiting
        return 1;
    }
    arr = temp;

    // Initialize the newly allocated memory
    for (int i = 5; i < size; i++) {
        arr[i] = i;
    }

    // Print the array content after reallocation
    printf("Array content after reallocation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory before exiting
    free(arr);

    return 0;
}
