/*
Find GCD of two numbers 
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

Example 1:
Input: N1 = 9, N2 = 12

Output: 3
Explanation:
Factors of 9: 1, 3, 9
Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3
Greatest common factor: 3 (GCD)

Example 2:
Input: N1 = 20, N2 = 15

Output: 5
Explanation:
Factors of 20: 1, 2, 4, 5, 10, 20
Factors of 15: 1, 3, 5, 15
Common Factors: 1, 5
Greatest common factor: 5 (GCD)
*/

#include<bits/stdc++.h>
using namespace std;

void GCD(int m, int n) {
    while(m!=n) {
        if(m>n) {
            m=m-n;
        } else {
            n=n-m;
        }
    }
    cout << "GCD is: " << m << endl;
}


//Brute force approach
int findGcd(int n1, int n2) {
    // Initialize gcd to 1
    int gcd = 1;

    // Iterate from 1 up to
    // the minimum of n1 and n2
    for(int i = 1; i <= min(n1, n2); i++) {
        // Check if i is a common
        // factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // Update gcd to the
            // current common factor i
            gcd = i;
        }
    }

    // Return the greatest
    // common divisor (gcd)
    return gcd;
}

//Better approach
int findGcd1(int m, int n) {
    for(int i=min(m,n); i>=1; i--) {
        if(m%i == 0 && n%i == 0) {
            return i;
        }
    }
    return 1;
}

//Optimal approach - Euclidean Algorithm:
int findGcd2(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}


int main() {
    int m, n;
    cout << "Enter 2 numbers: ";
    cin >> m >> n;
    GCD(m,n);
    cout << findGcd1(m,n) << endl;

    return 0;
}