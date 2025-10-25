#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int* cumulativeLengths(const char* words[], int size) {
    int* lengths = (int*)malloc(size * sizeof(int));
    int currentSum = 0;
    
    for (int i = 0; i < size; i++) {
        // 🐛 Find the bug in the variable assignment logic
        lengths[i] = strlen(words[i]);
        currentSum += strlen(words[i]);
    }
    return lengths;
}

int main() {
    const char* words[] = {"hello", "world", "bug"};
    int size = 3;
    
    int* result = cumulativeLengths(words, size);
    
    printf("Expected Output: 5 10 13\n");
    printf("Actual Output:   ");
    printArray(result, size);
    
    free(result);
    return 0;
}