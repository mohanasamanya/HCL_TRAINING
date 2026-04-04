#include <iostream>
using namespace std;
auto fun(int arr[],int target,int low,int high){
    
    int mid = (low+high)/2;
    if(target == arr[mid]) {
        return mid;
    }
    else if(target < arr[mid]){
        return fun(arr,target,low,mid-1);
    }
    else{
        return fun(arr, target, mid+1, high);
    }
}

int main() {
    int arr[5] = {5,8,14,44,98};
   int index= fun(arr,5,0,4);
   if(index!=-1){
       cout<<"element found at: "<<index;
   }
   else{
       cout<<"Not found";
   }
    
    
    return 0;
}
