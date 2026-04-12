#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={4,6,1,6,2};
    int n = arr.size();
    int k;
    cout<<"value k: "<<endl;
    cin>>k;
    int window_sum = 0;
    int max_sum = 0;
    for(int i = 0;i<k;i++){
        window_sum += arr[i];
    }
    max_sum= window_sum;
    for(int i = k;i<n;i++){
        window_sum += arr[i];
        window_sum -= arr[i-k];
        if(window_sum > max_sum){
            max_sum = window_sum;
        }
    }
    cout<<max_sum<<" is the max sum of subarray";
    

    return 0;
}
