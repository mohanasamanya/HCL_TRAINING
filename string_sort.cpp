#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
   
 
int main() {
    vector<string> str = {"sam","mohana","maheshbob","siri"};
    sort(str.begin(),str.end());
    for(auto s : str){
        cout<<s<<" ";
    }

    return 0;
}
