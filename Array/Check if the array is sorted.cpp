#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 4, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    // Check if array is sorted
    bool isSorted = true;  // Assume array is sorted
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {  // If any element is greater than the next one, array is not sorted
            isSorted = false;
            break;  // No need to continue checking once unsorted element is found
        }
    }
    
    if (isSorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;  // Return 0 to indicate successful execution
}
