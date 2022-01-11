#include <iostream>
using namespace std;

int main(){
    int num[] = {12,7,6,3};
    for (int i = 0; i < 4; i++)
    {
        if(num[i] % 2 != 0){
            cout << num[i] << endl;
        }
    }
    
}
