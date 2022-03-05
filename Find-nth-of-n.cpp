#include <iostream>
using namespace std;

int Nth(int num, int power){
    int old = num;
    int ans;
    for (int i = 2; i <= power; i++)
    {
       ans = (num *= old);
    }
    return ans;
}

int main()
{
    cout << Nth(2,4);
}
