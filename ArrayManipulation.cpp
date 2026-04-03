
#include<iostream>
using namespace std;

int main() {
    int n=5;
    int arr[n];
    int pos = 1;
    int neg = -1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]=neg--;
        }
        else{
            arr[i]=pos++;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
