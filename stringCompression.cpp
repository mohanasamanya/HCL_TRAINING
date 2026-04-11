
#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s = "aaaabb";
    int n = s.length();
    string result = "";
    int count = 1;
    for(int i = 1;i<n;i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            result += s[i-1]+to_string(count);
            count = 1;
            
        }
        
    }
    result += s[n-1]+to_string(count);
    cout<<result;
    return 0;
}
