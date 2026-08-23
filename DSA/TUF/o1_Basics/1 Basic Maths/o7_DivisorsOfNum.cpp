/*
Print all Divisors of a given Number
Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
Input: N = 12
Output: [1, 2, 3, 4, 6, 12]
Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.

*/

#include<bits/stdc++.h>
using namespace std;

void divisors(int n) {
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

vector<int> getDivisors(int N) {
    // Create a vector to store divisors
    vector<int> res;

    // Loop from 1 to square root of N
    for (int i = 1; i <= sqrt(N); i++) {
        // Check if i divides N
        if (N % i == 0) {
            // Add i to the result
            res.push_back(i);
            // If N / i is different from i, add N / i too
            if (i != N / i) {
                res.push_back(N / i);
            }
        }
    }
    // Return the list of divisors
    return res;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    divisors(n);

    vector<int> res = getDivisors(n);
    for(int val : res) {
        cout << val << " ";
    }

    return 0;
}