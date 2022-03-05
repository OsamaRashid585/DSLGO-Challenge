#include <iostream>
using namespace std;


int main()
{
    int n = 7;
    int a[n] = {2,5,84,3,67,4,8};
    int min = a[0];
    int max = a[0];
    for (int  i = 0; i < (n-1); i++)
    {
        if(min > a[i+1]){
            min = a[i+1];
        }

        if(max < a[i+1]){
            max = a[i+1];
        }

    }
    cout << min << endl;
    cout << max;
}
