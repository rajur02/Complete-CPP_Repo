/*
Count digits in a number
Problem Statement: Given an integer N, return the number of digits in N.

Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
                        
Example 2:
Input:N = 7789              
Output: 4
Explanation: The number 7789 has 4 digits.  
*/

#include<bits/stdc++.h>
using namespace std;

int countDigits(long long n) {
    int count=0;;
    while(n>0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}