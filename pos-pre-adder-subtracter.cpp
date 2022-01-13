#include <iostream>
using namespace std;

int main(){
    int n = 1;
   //4    //1    //3
    n = n++ + ++n;

    int a = 1;
    int b = 2;
           //1    //1 //2    //1
    int c = ++a - --b + a-- + b++;
    // a = 1;
    // b = 2;
    // c = 3;

    //pos n++ which is 2 but its use 1 for next val
    //pre ++n which is 2 and use 2 instently;




}