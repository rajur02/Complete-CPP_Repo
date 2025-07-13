/*write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%2==0 && n%3==0) {
        cout<<"divisible by both"<<endl;
    }
    else if(n%2==0) {
        cout<<"divisible by 2"<<endl;
    }
    else if(n%3==0) {
        cout<<"divisible by 3"<<endl;
    }
    else {
        cout<<"divisible by none"<<endl;
    }
    return 0;
}