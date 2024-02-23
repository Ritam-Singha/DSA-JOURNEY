#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2,4, 5,7};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    
    bool isSorted = true; 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i]) {  
            isSorted = false;
            break; 
    }
    
    if (isSorted) {
        cout << " The Array is sorted." << endl;
    } else {
        cout << "The Array is not sorted." << endl;
    }

    return 0;  
}

