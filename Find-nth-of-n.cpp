#include <iostream>
using namespace std;

void NthSys(int n,int p){
    int oldn = n;
    for (int i = 0; i < (p-1); i++)
    {
        int nth = n * oldn;
        n = nth;

        if(i == (p-2)){
            cout << nth << endl;
        }
    }
        
}

int main(){
    NthSys(2,4);
}

// step-1 run loop for p-1 because first run muliply 2num (2*2)
// step-2 store final nth number in varibale;
// step-3 equal the nth number to n; // 4
// step-4 make oldn var to store inp n and use on loop n;
// step-5 check condition (is it final loop call) then print nth