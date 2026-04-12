#include <iostream>
using namespace std;

int main()
{
    int num = 28;
    int count = 0;

    for(int i = 1; i * i <= num; i++){
        if(num % i == 0){
            if(i != num){
                count++;
            }

            int other = num / i;
            if(other != i && other != num){
                count++;
            }
        }
    }

    cout <<"factors: " <<count;

    return 0;
}
