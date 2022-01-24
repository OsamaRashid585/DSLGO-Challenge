#include <iostream>
using namespace std;

void feb(int n){
    int nt;
    int t1 = 0;
    int t2 = 1;
    for (int i = 0; i < n; i++)
    {
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
        cout << nt << endl;
    }
}
int main(){
    feb(4);
}