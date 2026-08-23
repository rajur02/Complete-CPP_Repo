/*
Factorial of a Number : Iterative and Recursive
Problem Statement: Given a number X,  print its factorial.
To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.
Note: X  is always a positive number. 

Examples
Example 1:
Input:
 X = 5
Output:
 120
Explanation:
 5! = 5*4*3*2*1

Example 2:
Input:
 X = 3
Output:
 6
Explanation:
 3!=3*2*1
*/

#include<bits/stdc++.h>
using namespace std;

/*
Iterative Solution
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int fact(int n) {
        int fact=1;
        for(int i=1; i<=n; i++) {
            fact*=i;
        }
        return fact;
    }
};

/*
Recursive Solution
Time Complexity: O(N), Since the function is being called n times, and for each function, we have only one printable line that takes O(1) time, so the cumulative time complexity would be O(N)
Space Complexity: O(N), In the worst case, the recursion stack space would be full with all the function calls waiting to get completed and that would make it an O(N) recursion stack space.
*/
class Solution1 {
public:
    int fact(int n) {
        if(n==0)
            return 1;
        return n*fact(n-1);
    }
};

int main() {
    int n;
    Solution s;
    Solution s1;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Factorial of a number using iterative method: " << s.fact(n) << endl; 
    cout << "Factorial of a number using recursive method: " << s1.fact(n) << endl; 
    return 0;
}
