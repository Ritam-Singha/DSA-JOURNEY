#include <iostream>
using namespace std;

int main() {
    int largest = 0;
    int second_largest=0;
    int x=0;
    int arr1[] = {1,1,2,4,7,5};
    int arr2[]={1,3,4,5,8};
    int arr3[20];
    int j=0;
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    for (int i = 0; i < n; i++) {
      if(arr1[i]!=arr1[i+1]){
          arr3[j]=arr1[i];
          cout<<arr1[i];
      }
    }
    int m = sizeof(arr3) / sizeof(arr3[0]); 
    int o = sizeof(arr2) / sizeof(arr2[0]); 
    for (int k = 0; k < m; k++) {
      for(int l=0;l<o;l++){
          if(arr3[k]!=arr[l]){
              arr3[m+1]=arr
          }
      }
    }

    // for(int k=0;k<10;k++){
    //     cout<<arr3[k];
    // }
    return 0;
}
