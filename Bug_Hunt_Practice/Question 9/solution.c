#include <stdio.h>

int isSorted(int arr[], int size) {
    if (size < 2) {
        return 1; 
    }
    
    int sorted = 1; // Assume sorted
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i+1]) {
            sorted = 0; 
        } else {
            sorted = 1; 
        }
    }
    return sorted;
}

int main() {
    int arr[] = {1, 2, 5, 3, 10}; 
    int arr2[] = {1, 2, 5, 8, 10}; 
    
    int result1 = isSorted(arr, 5);
    printf("Checking {1, 2, 5, 3, 10}...\n");
    printf("Expected Output: 0\n");
    printf("Actual Output:   %d\n", result1); 

    int result2 = isSorted(arr2, 5);
    printf("\nChecking {1, 2, 5, 8, 10}...\n");
    printf("Expected Output: 1\n");
    printf("Actual Output:   %d\n", result2); 
    return 0;
}