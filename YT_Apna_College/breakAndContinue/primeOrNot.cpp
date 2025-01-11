// Check th number is Prime/not and Print the Prime numbers between a and b
#include<iostream>
using namespace std;

int main() {

    int a,b;
    //cin>>a;
    cin>>a>>b;
    // int i;
    // for(i=2; i<a; i++) {
    //     if(a%i==0) {
    //         cout<<"Not prime"<<endl;
    //         break;
    //     }
    // }
    // if(i==a) {
    //     cout<<"Is Prime"<<endl;
    // }
    
    for(int num=a; num<=b; num++) {
        int i;
        for(i=2; i<num; i++) {
            if(num%i==0)
                break;
        }
        if(i==num)
            cout<<num<<endl;
    }
    return 0;
}