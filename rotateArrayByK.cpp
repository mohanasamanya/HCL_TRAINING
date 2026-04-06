
#include <iostream>
using namespace std;
void rotate(int arr[],int n,int k){
    k = k%n;
    for(int j =0;j<k;j++){
        
    int temp = arr[n-1];
    for(int i = n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    }
  
}
int main() {
    
    int arr[]={2,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    rotate(arr,4,6);
   
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
