#include <iostream>
using namespace std;
int fictorial(int n){
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}
int main(){
    int n;
    int r;

    cin >> n;
    cin >> r;

  int nCr = fictorial(n) / (fictorial(n - r) * fictorial(r));
  cout << nCr;
}