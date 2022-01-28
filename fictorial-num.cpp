#include <iostream>
using namespace std;

void fictorial(int n){
    int t1 = 1;
    int fic;
    for (int i = 2; i <= n; i++)
    {
        fic = t1 * i;
        t1 = fic;
    }
    cout << fic << endl;
    
}
int main(){
    fictorial(5);
}
