#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;


  /////with tw0///
    if(a > b){
        cout << a;
    }
    else{
        cout << b;
    }


//////with three//// /*****Optimized*///////
    if(a > b){
        if(a > c){
            cout << a;
        }
        else{
            cout << c;
        }
    }
    else{
        if(b > c){
            cout << b;
        }
        else{
            cout << c;
        }
    }
    
//////with three but brutle form/////


    if(a > b && a > c){
        cout << a;
    }
    else if(b > a && b > c){
        cout << b;
    }
    else if(c > a && c > b){
        cout << c;
    }
}