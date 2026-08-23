/*
Print Fibonacci Series up to Nth term
Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

Examples
Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6
Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force
Time Complexity: O(n)+O(n), for calculating and printing the Fibonacci series.
Space Complexity: O(n) for storing the fibonacci series.
*/
class Solution {
public:
    vector<int> fibonacci(int n) {
        vector<int> fib(n+1);
        fib[0] = 0;
        if (n >= 1) {
            fib[1] = 1;
        }        
        for(int i=2; i<=n; i++) {
            fib[i] = fib[i-1]+fib[i-2];
        }
        return fib;
    }
};

/*
Better Approach
Time Complexity: O(N).As we are iterating over just one for a loop.
Space Complexity: O(1), no extra space used.
*/
class Solution1 {
public: 
    void fibonacci(int n) {
        if(n==0) {
            cout << 0 << endl;
        } else {
            int secondLast = 0;
            int last = 1;
            cout << secondLast << " " << last << " ";
            int curr;
            for(int i=2; i<=n; i++) {
                curr = secondLast+last;
                secondLast=last;
                last=curr;
                cout << curr << " ";
            }
        }
        cout << endl;
    }
};

/*
Optimal Approach
Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls and so on which makes worst-case time complexity to be exponential in nature }.
Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack since we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) Fibonacci numbers before it }.
*/
class Solution2 {
public:
    int fibonacci(int n) {
        if(n<=1) {
            return n;
        }
        return fibonacci(n-1)+fibonacci(n-2);
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Solution s;
    vector<int> res = s.fibonacci(n);
    for(int v : res) {
        cout << v << " ";
    }
    cout << endl;

    Solution1 s1;
    s1.fibonacci(n);

    Solution2 s2;
    cout << s2.fibonacci(n) << endl;
    return 0;
}