
#include<iostream>
using namespace std;

int main() {
    int n=5;
    int arr[n];
    int low = 0;
    int high = n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]=high--;
        }
        else{
            arr[i]=low++;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
