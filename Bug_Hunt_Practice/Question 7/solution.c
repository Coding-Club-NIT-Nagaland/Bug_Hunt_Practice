#include <stdio.h>
#include <string.h>

int findFirstA(const char* str) {
    int foundIndex = -1;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            foundIndex = i;
        }
    }
    return foundIndex;
}

int main() {
    const char* text = "banana";
    int index = findFirstA(text);
    printf("Expected Output: 1\n");
    printf("Actual Output:   %d\n", index);
    return 0;
}