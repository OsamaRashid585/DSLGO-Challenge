#include <iostream>
using namespace std;

int rnth(int n,int p){ // assign
    if(p < 1){ // compare
        return 1; //main part 1
    }
    else
    {
        return n *= rnth(n,p-1); // increasing / decreasing
        //            ^main part 2
    }
    
}
int main(){
    cout << rnth(5,5);
}