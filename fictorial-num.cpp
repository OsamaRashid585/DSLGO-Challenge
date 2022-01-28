#include <iostream>
using namespace std;

void fictorial(int n){
    int t1 = 1;
    int t2 = 2;
    int fic = 0;
    for (int i = 1; i < n; i++)
    {
        fic = t1 * t2;
        t1 = fic;
        t2++;
    }
    cout << fic << endl;
    
}
int main(){
    fictorial(5);
}