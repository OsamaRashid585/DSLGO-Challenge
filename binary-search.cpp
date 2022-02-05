#include <iostream>
using namespace std;

int main(){
    int k = 3;
    int n = 10;
    int s = 0; // indx
    int e = n-1; //indx
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
             // 0 1 2 3 4 5 6 7 8  9
    while (s <= e)
    {
        int m = (s+e)/2;

        if(k == a[m]){
            cout << m; // index of key
            break;
        }
        else if(k > a[m]){
            s = m+1;
        }
        else if(k< a[m]){
            e = m-1;
        }
    }
    

}
//check num of indx
//inshlize the arry size

