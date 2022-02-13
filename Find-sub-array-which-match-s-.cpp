#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int a[n] = {2,4,8};
    int sum;
    int s = 16;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                sum += a[k];
            }
        }
        cout << endl;
        if(sum == s){
            cout << "start form subarry " << i;
            break;
        }
    }
    
    
}