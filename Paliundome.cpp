#include <iostream>
using namespace std;

int main(){
    int num = 101;
    int reverse_num;
    int a;
    int b;
    int c;

    a = num % 10;
    b = (num / 10) % 10;
    c = (num / 100) % 10;

    // cout << a;
    // cout << b;
    // cout << c;

    // join in one int

    reverse_num = (a*100) + (b*10) + c;

    cout << reverse_num << endl;

    //panluidome condition checker

    if(reverse_num == num){
        cout << "palidurm";
    }
    else{
        cout << "not paludurm";
    }
    
}