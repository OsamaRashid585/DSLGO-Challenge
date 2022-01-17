#include <iostream>
using namespace std;

bool Isprime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0){
        return false;
       }
    }
    return true;
}

int main(){
    int a;
    int b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        if(Isprime(i)){
            cout << i <<endl;
        }
    }
}

