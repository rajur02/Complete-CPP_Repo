/*
Sum of first N Natural Numbers
Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

Examples
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force Approach
Time Complexity: O(N),We iterate from 1 to N once, performing a constant-time addition operation in each iteration, resulting in linear time complexity.
Space Complexity: O(1),We only use a few variables to store the sum and loop counter, so the space usage remains constant regardless of N.
*/
void SumUsingLoop(int n) {
    int sum=0;
    for(int i=1; i<=n; i++) {
        sum+=i;
    }
    cout << "The sum using loop is: " << sum << endl;
}

/*
Using Formula
Time Complexity: O(1)
Space Complexity: O(1)
*/
void SumUsingFormula(int n) {
    int sum = (n*(n+1))/2;
    cout << "The sum using formula is: " << sum << endl;
}


/*
Recursive Approach
Time Complexity: O(N),The function is called N times, with each call performing O(1) work.
Space Complexity: O(N),Due to recursive function calls being stored on the call stack, which grows linearly with N.
*/
class Solution {
public: 
    int SumOfNNaturalNums(int n) {
        if(n==1) 
            return 1;
        return n+SumOfNNaturalNums(n-1);
    }
};

int main() {
    int n;
    Solution s;
    cout << "Enter a number: ";
    cin >> n;
    SumUsingLoop(n);
    SumUsingFormula(n);
    cout << "Sum using Recursion is: " << s.SumOfNNaturalNums(n) << endl;
    return 0;
}