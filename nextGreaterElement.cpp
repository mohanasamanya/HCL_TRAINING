#include <iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> function(vector<int> &arr){
    stack<int> st;
    int n = arr.size();
    vector<int> result(n,-1);
    
     for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = arr[st.top()];
        }
        st.push(i);
    }
    return result;
}


int main() {
    vector<int> arr = {2,1,2,4,3};
    vector<int> res = function(arr);
    for(int x : res){
        cout<<x<<" ";
    }
    return 0;
}
