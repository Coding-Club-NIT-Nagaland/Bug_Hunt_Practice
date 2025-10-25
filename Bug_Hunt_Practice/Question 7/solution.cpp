#include <iostream>
#include <string>
using namespace std;

int findFirstA(std::string str) {
    int foundIndex = -1;
    int len = str.length();
    
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a') {
            foundIndex = i;
        }
    }
    return foundIndex;
}

int main() {
    string text = "banana";
    int index = findFirstA(text);
    cout << "Expected Output: 1" << endl;
    cout << "Actual Output:   " << index << endl;
    return 0;
}