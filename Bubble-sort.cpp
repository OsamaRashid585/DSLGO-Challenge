#include <iostream>
using namespace std;
#include <vector>

int main(){
    int n = 4;
    int array[n] = {3,6,3,8}; // 4
    
for (int o = 0; o < n; o++)
{
    for (int i = 0; i < (n-1); i++)
    {
        if(array[i] > array[i+1]){
            int pa = array[i];
            array[i] = array[i+1];
            array[i+1] = pa;
        }
    }
}

for (int c = 0; c < n; c++)
{
    cout << array[c];
}



    
}
