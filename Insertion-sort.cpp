#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int a[n] = {4,5,2,1,};
    
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j;

        for (j = (i-1); j >= 0 && a[j] > temp; j--)
        {
           a[j+1] = a[j];
        }
        a[j+1] = temp; 

    }
    
    
    ////print sorted array

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    
    
}

