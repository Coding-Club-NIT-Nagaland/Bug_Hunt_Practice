#include <iostream>
using namespace std;

int countPassing(int grades[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] >= 50) {
            count++;
        }
    }
    return count;
}

int main() {
    int grades[] = {40, 50, 51, 80, 100};
    int size = 5;
    
    int numPassed = countPassing(grades, size);
    cout << "Expected Output: 3" << endl;
    cout << "Actual Output:   " << numPassed << endl;
    return 0;
}