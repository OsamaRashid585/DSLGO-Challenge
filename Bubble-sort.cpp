#include <iostream>
using namespace std;

int main(){
    int n = 9;
    int a[n] = {9,8,7,6,5,4,3,2,1};
    

    for (int i = 0; i < n; i++)
    {
        for (int r = 0; r < (n-1); r++)
        {
           if(a[r] > a[r+1]){
              int temp = a[r];
              a[r] = a[r+1];
              a[r+1] = temp;
           }
       }
    }
    
    
    ////print sorted array

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    
    
}

