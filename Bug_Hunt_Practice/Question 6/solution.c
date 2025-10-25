#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    reverseArray(arr, size);
    
    printf("Expected Output: 5 4 3 2 1\n");
    printf("Actual Output:   ");
    printArray(arr, size);
    return 0;
}