#include <stdio.h>
#include <string.h>

int isPalindrome(const char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    const char* text = "racecar";
    int result = isPalindrome(text);
    printf("Checking 'racecar'...\n");
    printf("Expected Output: 1\n");
    printf("Actual Output:   %d\n", result);
    
    const char* text2 = "hello";
    int result2 = isPalindrome(text2);
    printf("\nChecking 'hello'...\n");
    printf("Expected Output: 0\n");
    printf("Actual Output:   %d\n", result2);
    return 0;
}