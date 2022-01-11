#include <iostream>
using namespace std;

int main(){
    int num[] = {3,54,56,3};

    for(int i = 0; i < 4; i++){
        
        if(num[i] % 2 == 0){
           cout <<"even" << endl;
        }
        else{
           cout <<"odd" << endl;
        }
    }
}
