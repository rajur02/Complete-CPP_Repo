/*
Check if a number is Armstrong Number or not
Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example 1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
Example 2:
Input:N = 371                
Output: True
Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371

*/

#include<bits/stdc++.h>
using namespace std;

bool isArmStrong(int n) {
    int k = to_string(n).length(); // Get number of digits
    int sum=0, tmp=n;
    while(n>0) {
        int lastDigit = n%10;
        sum+=pow(lastDigit,k);
        n/=10;
    }

    return sum == tmp;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isArmStrong(n))
        cout << "Armstrong number" << endl;
    else    
        cout << "Not Armstrong" << endl;

    return 0;
}