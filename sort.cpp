#include <iostream>
using namespace std;

int main() {
    int temp;
    int arr[3] = {2,0,1};
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
