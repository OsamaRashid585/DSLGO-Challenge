#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s = "hhbnnbbhh";
    
    int max = 0;
    char alpha;

    for (int i = 0; i < s.length(); i++)
    {
      int count = 0;
      for (int j = 0; j < s.length(); j++)
      {
        if(j != i && s[i] == s[j]){
          count++;
          if(count == max ){
            alpha = s[i];
          }
        }
      }
      if(count >= max){
        max = count;
      }
    }
    cout << max << alpha;
}