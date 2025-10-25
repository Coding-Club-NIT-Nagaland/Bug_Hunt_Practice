#include <stdio.h>

int sumOfEvens(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 1) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    
    int result = sumOfEvens(arr, size);
    printf("Expected Output: 12\n");
    printf("Actual Output:   %d\n", result);
    return 0;
}