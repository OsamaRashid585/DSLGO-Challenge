#include <iostream>
using namespace std;
#include <stack>
string reverse(string s){
    string rs;
    for (int i = s.length()-1; i >= 0; i--)
    {
        rs += s[i];
    }
    return rs;
}
int main(){
    string s = "abcdef";
    s = reverse(s);
    cout << s;
}