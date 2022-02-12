#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int a[n] = {1,2,2};
    int subArraySum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            subArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                subArraySum += a[k];
            }
            cout << subArraySum << endl;
        }
        
    }
    
}