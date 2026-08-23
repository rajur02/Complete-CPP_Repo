/*
Check if the given String is Palindrome or not
Problem Statement: Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string.

Examples
Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force Approach
Time Complexity: O(N), where N is the length of the string. Each character is compared at most once till the middle of the string.
Space Complexity: O(1), since no extra space is used apart from a few variables for iteration.
*/
class Solution {
public: 
    bool isPalindrome(string str) {
        int l=0, r=str.length()-1;
        while(l<r) {
            if(!isalnum(str[l])) 
                l++;
            else if(!isalnum(str[r])) 
                r--;
            else if(tolower(str[l])!=tolower(str[r]))
                return false;
            else {
                l++; r--;
            }
        }
        return true;
    }
};

/*
Optimal Approach
Time Complexity: O(N), where N is the length of the string. Each character is checked once.
Space Complexity: O(N), due to the recursion stack in the worst case (no early termination).
*/

bool isPalindrome(int i, string str) {
    if(i>=str.length()/2) return true;

    if(tolower(str[i]) != tolower(str[str.length()-i-1])) return false;
    return isPalindrome(i+1, str);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    Solution s;
    bool res = s.isPalindrome(str);
    if(res) {
        cout << "str is Palindrome" << endl;
    } else {
        cout << "str is not Palindrome" << endl;
    }

    if(isPalindrome(0, str)) {
        cout << "Recursive: str is Palindrome" << endl;
    } else {
        cout << "Recursive: str is not Palindrome" << endl;
    }
    return 0;
}