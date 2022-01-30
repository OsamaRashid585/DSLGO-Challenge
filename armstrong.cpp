#include <iostream>
using namespace std;

int main(){
    int n = 153;
    int a;
    int b;
    int c;

    a = n % 10;
    b = (n/10) % 10;
    c = (n/100) % 10;

    a = a*a*a;
    b = b*b*b;
    c = c*c*c;

    int arms = a + b + c;
    
    if(arms = n){
        cout << "number is armstrom";
    }
    else{
        cout << "not armstorme";
    }
}

// armstrong number is make cube of evry num and plue all of them result is the same number you give is armastrong number
