#include <iostream>
using namespace std;

int main(){
    int n = 9;
    int a[n] = {9,8,7,6,5,4,3,2,1};
    

    for (int r = 0; r < n; r++)
    {
        int min = r; // first
        for (int i = r; i < (n-1); i++) // second
        {
           if(a[min] > a[i+1]){
               min = i+1;
            }
        }
        int oldn = a[r]; // forth
        a[r] = a[min];  // third
        a[min]  = oldn; // fifth
    }
    
    ////print sorted array

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    
    
}

