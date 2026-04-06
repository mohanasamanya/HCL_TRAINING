
#include <iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int low,int high,int target){
    int mid = (low + high)/2;
    if(low>high) return -1;
    
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]< target){
            return binarySearch(arr,mid+1,high,target);
        }
        else{
            return binarySearch(arr,low,mid-1,target);
        }
    
}

int main() {
    vector <int> arr = {2,4,6,8,10,91};
    int n = arr.size();
    int index = binarySearch(arr,0,n-1,4);
    cout<<index;
    

    return 0;
}
