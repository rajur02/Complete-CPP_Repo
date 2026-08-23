/*
Print N to 1 using Recursion
Problem Description: Given an integer N, write a program to print numbers from N to 1.

Examples
Input: N = 4
Output: 4, 3, 2, 1
Explanation: All the numbers from 4 to 1 are printed.
Input: N = 1
Output: 1 
Explanation: This is the base case.
*/

#include<bits/stdc++.h>
using namespace std;

//Time Complexity: O(N), we print every number from N to 1 using recursion
//Space Complexity: O(N), stack space used for recursive calls.
class Solution {
public:
    void printNums(int n) {
        if(n<=0) 
            return;
        cout << n << " ";
        printNums(n-1);
    }
};

//Forward Recursion
class Solution1 {
public:
    void printNums(int n, int count) {
        if(count >= n) 
            return;
        cout << n << " ";
        printNums(n-1, count);
    }
};

class Solution2 {
public:
    void printNums(int n, int count) {
        if(count > n) 
            return;
        printNums(n, count+1);
        cout << count << " ";
    }
};

int main() {
    int n;
    Solution s;
    Solution1 s1;
    Solution2 s2;
    cout << "Enter a number: " << endl;
    cin >> n;
    s.printNums(n);
    cout << endl;
    s1.printNums(n, 0);
    cout << endl;
    s2.printNums(n, 1);
    return 0;
}