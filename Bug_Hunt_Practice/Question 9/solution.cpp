#include <iostream>
using namespace std;
bool isSorted(int arr[], int size) {
    if (size < 2) {
        return true;
    }
    
    bool sorted = true;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i+1]) {
            sorted = false;
        } else {
            sorted = true;
        }
    }
    return sorted;
}

int main() {
    int arr[] = {1, 2, 5, 3, 10}; 
    int arr2[] = {1, 2, 5, 8, 10}; 
    
    bool result1 = isSorted(arr, 5);
    cout << "Checking {1, 2, 5, 3, 10}..." <<endl;
    cout << "Expected Output: false" << endl;
    cout << "Actual Output:   " << boolalpha << result1 <<endl;

    bool result2 = isSorted(arr2, 5);
    cout << "\nChecking {1, 2, 5, 8, 10}..." <<endl;
    cout << "Expected Output: true" << endl;
    cout << "Actual Output:   " << boolalpha << result2 << endl;
    return 0;
}