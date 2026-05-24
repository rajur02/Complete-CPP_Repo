/*
Check if a number is Palindrome or Not
Problem Statement: Given an integer N, return true if it is a palindrome else return false.
A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
                                        
Example 2:
Input:N = 7789          
Output: Not Palindrome
Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long long n) {
    long long rev=0, dup=n;
    while(n>0) {
        int lastDigit = n%10;
        rev=rev*10+lastDigit;
        n/=10;
    }

    if(dup==rev)
        return true;    
    return false;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPalindrome(n)) 
        cout << "Is palindrome" << endl;
    else
        cout << "not palindrome" << endl;
    
    return 0;
}