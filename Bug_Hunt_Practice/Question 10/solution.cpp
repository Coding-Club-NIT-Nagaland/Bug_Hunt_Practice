#include <iostream>
using namespace std;    

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
    cout << "Expected Output: 12" << endl;
    cout << "Actual Output:   " << result << endl;
    return 0;
}