#include <iostream>
using namespace std;

int fictorial(int n){
    int old = n;
    int ans;
    for (int i = 1; i < old; i++)
    {
       ans = n *= (old-i);
    }
    return ans;
}
int main()
{
    cout << fictorial(5);
}
// what is fictorial 5! = 4*3*2*1;
//https://www.youtube.com/watch?v=o7RYf76tedw
