//sum of n numbers
#include<iostream>
using namespace std;

int main() {
    int n;
    std::cin>>n;
    int sum =0;
    
    for(int counter=1; counter<=n; counter++) {
        sum=sum+counter;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}