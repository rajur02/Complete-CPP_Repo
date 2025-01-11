//Simple calculator program
#include<iostream>
using namespace std;

int main() {
    float n1, n2;
    cout<<"Input two numbers"<<endl;
    cin >> n1 >>n2;
    
    char op;
    cout<<"Input a operator"<<endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"Enter a valid operator!"<<endl;
        break;
    }
    return 0;
}