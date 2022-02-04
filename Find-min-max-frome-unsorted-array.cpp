#include <iostream>
using namespace std;
#include <vector>

int main(){
    int n = 4;
    int array[n] = {3,6,8,3}; // 4
    
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
    cout << array[0] << endl;
    cout << array[n-1];
    
}
