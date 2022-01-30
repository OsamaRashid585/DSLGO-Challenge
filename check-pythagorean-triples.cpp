#include <iostream>
using namespace std;
int max(int i,int d,int m){
    if(i > d){
            if(i > m){
                return i;
            }
            else{
                return m;
            }
        }
        else{
            if(d > m){
                return d;
            }
            else{
                return m;
            }
        }
}

bool check(int x,int y,int z){
    int a,b,c;
    a = max(x,y,z);
    
    if(a == x){
        b = y;
        c = z;
    }else if(a == y){
        b = x;
        c = z;
    }else if(a == z){
        b = x;
        c = y;
    }
    a*=a;
    b*=b;
    c*=c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    if(a == b + c){
        return true;
    }
    else{
        return false;
    }


}
int main(){
    int f,g,j;
    cin >> f >> g >> j;

    if(check(f,g,j)){
        cout << "yes num is pytho";
    }
    else{
        cout << "no num is not pytho";
    }
}

// Pythagorean number is c(sqr of 2) = a(sqr of 2) + b(sqr of 2) 100 == 100 