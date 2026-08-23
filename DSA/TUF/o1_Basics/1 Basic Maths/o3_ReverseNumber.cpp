/*
Reverse Digits of A Number
Problem Statement: Given an integer N return the reverse of the given number.
Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.

Input: N = 12345
Output:54321
Explanation: The reverse of 12345 is 54321.

Input: N = 7789                
Output: 9877
Explanation: The reverse of number 7789 is 9877.
*/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int ans =0;
    while (x != 0)
    {
        int digit=x%10;
        if ((ans > INT_MAX/10)||(ans < INT_MIN/10))
        {
            return 0;
        }
        
        ans =(ans*10)+ digit;
        x=x/10;
       }
       return ans;

    }
};

long long revNumber(long long n) {
    int sign = (n < 0) ? -1 : 1;  // save sign, need to handle signed number also
    n = abs(n);                     // work with positive

    long long rev = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }

    return sign * rev;   
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << revNumber(n) << endl;
    return 0;
}