#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // Calculate sum of all numbers from 1 to n
    int totalSum = (n + 1) * (n + 2) / 2;

    // Calculate sum of numbers in the array
    int arraySum = 0;
    for (int i = 0; i < n; ++i) {
        arraySum += arr[i];
    }

    // The difference between totalSum and arraySum will be the missing number
    return totalSum - arraySum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, n);

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}

