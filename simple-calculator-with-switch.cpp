#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    char s;

    cout << "enter num 1" << endl;
    cin >> num1;

    cout << "enter operator" << endl;
    cin >> s;

    cout << "enter num 2" << endl;
    cin >> num2;

    switch(s){
        case '+':
        cout << num1 + num2;
        break;

        case '-':
        cout << num1 - num2;
        break;

        case '*':
        cout << num1 * num2;
        break;

        case '/':
        cout << num1 / num2;
        break;

        case '%':
        cout << num1 % num2;
        break;
    }
}