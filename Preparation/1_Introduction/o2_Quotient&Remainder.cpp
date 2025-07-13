#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin>>dividend;
    cout << "Enter the divisor: ";
    cin>>divisor;

    if(divisor!=0) {
        cout << "Quotient is: " << dividend/divisor << endl;
        cout << "Remainder is: " << dividend % divisor << endl; 
    } 
    else {
        cout << "Divisor is 0, Enter valid divisor" << endl;
    }
}