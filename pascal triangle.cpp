#include <iostream>
using namespace std;

int fcitoral(int Ln){
    int f = 1;
    for (int i = 2; i <= Ln; i++)
    {
        f *= i; 
    }
    return f;
}

void parTr(int x){
    for (int n = 0; n < x; n++)
    {
        for (int r = 0; r <= n; r++)
        {
           int ncr = fcitoral(n) / (fcitoral(n-r) * fcitoral(r));
           cout << ncr;
        }
        
        cout << endl;
        
    }
}


int main(){
    parTr(5);
}