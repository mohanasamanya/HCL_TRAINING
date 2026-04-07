
#include <iostream>
using namespace std;


int main() {
    int arr[] = {1,2,3,25,4};
    int window_sum = 0;
    
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<k;i++){
        window_sum += arr[i];
    }
    int max_sum = window_sum;
     for(int i = k; i < n; i++) {
        window_sum += arr[i];      
        window_sum -= arr[i - k];  
        
        max_sum = max(max_sum, window_sum);
    }
    cout<<"Max Sum:" <<max_sum;
    
  
    return 0;
}
