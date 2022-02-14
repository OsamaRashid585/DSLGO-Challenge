#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int a[n] = {1,2,2};
    int subArraySum;
    int s = 4;

    for (int i = 0; i < n; i++)
    {
        subArraySum = 0;
        for (int j = i; j < n; j++)
        {
            subArraySum += a[j];
        }
        if (subArraySum == s)
        {
            cout << "start form subarry " << i;
            break;
        }
        
    }
    
}
