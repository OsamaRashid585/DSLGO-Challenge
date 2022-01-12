#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum = sum + i;

        if(i == n){
            cout << sum;
        }
    }
}

// step-1 run loop for p-1 because first run muliply 2num (2*2)
// step-2 store final nth number in varibale;
// step-3 equal the nth number to n; // 4
// step-4 make oldn var to store inp n and use on loop n;
// step-5 check condition (is it final loop call) then print nth