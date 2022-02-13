#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int a[n] = {2,4,8,4};
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ( a[i] == a[j] && i != j && flag == false )
            {
                cout << i << j <<endl;
                flag = true;

            }
        }
           
    }
    
}