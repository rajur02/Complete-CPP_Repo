#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin>>n;
    if(n%2==0)
        cout << n << " is even" << endl;
    else    
        cout << n << " is odd" << endl;

    //using ternary operator
    (n%2==0) ? cout << n << " is even" : cout << n << " is odd";
}