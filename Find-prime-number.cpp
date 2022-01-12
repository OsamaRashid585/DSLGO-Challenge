#include <iostream>
using namespace std;

int main(){
    int n = 30;
    int checked;
    for(int d = 2; d < n;d++){
        if(n % d != 0){
            if(d == (n-1)){
                cout << n << " is prime" << endl;
            }
        }
        else{
            cout << n << "not prime" << endl;
            break;
        }
    }
    
}
