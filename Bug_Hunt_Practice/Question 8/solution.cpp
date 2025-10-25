#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printVector(const vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

vector<int> cumulativeLengths(const vector<string>& words) {
    vector<int> lengths;
    int currentSum = 0;
    
    for (int i = 0; i < words.size(); i++) {
        lengths.push_back(words[i].length());
        currentSum += words[i].length();
    }
    return lengths;
}

int main() {
    vector<string> words = {"hello", "world", "bug"};
    
    vector<int> result = cumulativeLengths(words);
    
    cout << "Expected Output: 5 10 13" << endl;
    cout << "Actual Output:   ";
    printVector(result);
    return 0;
}