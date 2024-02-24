#include <iostream>
#include <algorithm> // For std::reverse
using namespace std;

// Function to reverse an array
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to left rotate an array by d positions
void leftRotate(int arr[], int n, int d) {
    d = d % n; // Adjust rotation if d is greater than array size

    // Reverse the first d elements
    reverseArray(arr, 0, d - 1);

    // Reverse the remaining elements
    reverseArray(arr, d, n - 1);

    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    cout << "Original array: ";
    printArray(arr, n);

    leftRotate(arr, n, d);

    cout << "Array after left rotation by " << d << " positions: ";
    printArray(arr, n);

    return 0;
}
