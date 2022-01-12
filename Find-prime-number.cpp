#include <iostream>
using namespace std;

int main(){
    int n = 31;
    int div;
    for(div = 2; div < n; div++){
        if(n%div == 0){
            cout << "not prime";
            break;
        }
    }
    if(div == n){
        cout << n << " is prime";
    }
}
