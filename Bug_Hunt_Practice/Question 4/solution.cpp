#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = sum / size;
    return average;
}

int main() {
    int grades[] = {5, 10, 2};
    int size = 3;
    
    double avg = calculateAverage(grades, size);
    cout << "Expected Output: 5.666..." << endl;
    cout << "Actual Output:   " << setprecision(5) << avg << endl;
    return 0;
}