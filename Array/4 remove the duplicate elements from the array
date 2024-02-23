#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 4, 4, 4, 5, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Temporary array to store unique elements
    int temp[n];
    int j = 0;

    // Loop through the array and copy only unique elements to temp array
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            temp[j++] = arr[i];
        }
    }

    // Copy the unique elements back to the original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    // Update the size of the array
    n = j;

    // Print the array after removing duplicates
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
