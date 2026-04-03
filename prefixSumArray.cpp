#include<iostream>
using namespace std;

int main() {
    int n=4;
    int arr[n] = {1,2,3,4};
    int pre[n];
    pre[0]=arr[0];
    for(int i =1;i < n; i++){
        pre[i] = pre[i-1]+arr[i];
        
    }
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    
    return 0;
}
