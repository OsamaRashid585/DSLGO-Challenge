#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int a[n] = {6,3,1,7,7};
    int min = a[0];

    for (int i = 0; i < (n-1); i++)
    {
        if(min > a[i+1]){
            min = a[i+1];
        }
    }
    cout << min;
    
}

