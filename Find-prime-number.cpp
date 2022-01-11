#include <iostream>
using namespace std;

int main(){
    int div = 2;
    int num[] = {12,7,6,3};
    for (int i = 0; i < 4; i++)
    {
        while(div < num[i])
        {
            if(num[i] % div != 0){
            cout << num[i] << endl;
        }
           div++;
        }
    }
    
}

