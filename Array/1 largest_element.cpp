
#include <iostream>
using namespace std;

int main() {
    int largest = 0;
    int arr[] = {3, 4, 11, 41, 78, 1, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}
