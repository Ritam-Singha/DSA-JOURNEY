#include <iostream>
using namespace std;

// Function to perform linear search in an array
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {2, 5, 8, 11, 15, 19, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 11; // Number to search for

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}

