
#include <iostream>
using namespace std;

int main() {
    int largest = 0;
    int second_largest=0;
    int x=0;
    int arr[] = {1,2,4,7,5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];
        }
    }

    cout << "The second largest element in the array is: " << second_largest << endl;

    return 0;
}
