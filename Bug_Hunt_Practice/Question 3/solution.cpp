#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(std::string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string text = "racecar";
    bool result = isPalindrome(text);
    cout << "Checking 'racecar'..." << endl;
    cout << "Expected Output: true" << endl;
    cout << "Actual Output:   " << boolalpha << result << endl;
    
    string text2 = "hello";
    bool result2 = isPalindrome(text2);
    cout << "\nChecking 'hello'..." << endl;
    cout << "Expected Output: false" << endl;
    cout << "Actual Output:   " << boolalpha << result2 << endl;
    return 0;
}