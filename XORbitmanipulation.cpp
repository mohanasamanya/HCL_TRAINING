#include <iostream>
using namespace std;

int main() {
    int arr[5]={5,2,7,5,7};
    int result = 0;
    for(int i=0;i<5;i++){
        result = result ^ arr[i];
    }
    cout<<result;
   
    return 0;
}
