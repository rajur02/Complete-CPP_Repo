/*
Print 1 to N using Recursion
Problem Description: Given an integer N, write a program to print numbers from 1 to N.

Examples
Input: N = 4
Output: 1, 2, 3, 4
Explanation: All the numbers from 1 to 4 are printed.
Input: N = 1
Output: 1 
Explanation: This is the base case.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print1ToN(int n) {
        if(n<=0) {
            return;
        }
        print1ToN(n-1);
        cout << n << " ";
    }
};

//Forward Recursion
class Solution1 {
public:
    void printNums(int current, int n) {
        if(current > n) {
            return;
        }
        cout << current << " ";
        printNums(current+1, n);
    }
};

//Backtracking
class Solution2 {
public:
    void printNums(int current, int n) {
        if(current >= n) 
            return;
        printNums(current, n-1);
        cout << n << " ";
    }
};

int main() {
    int n;
    Solution s;
    Solution1 s1;
    Solution2 s2;
    cout << "Enter a number: " << endl;
    cin >> n;
    s.print1ToN(n);
    cout << endl;
    s1.printNums(1, n);
    cout << endl;
    s2.printNums(0, n);
    cout << endl;
    return 0;
}