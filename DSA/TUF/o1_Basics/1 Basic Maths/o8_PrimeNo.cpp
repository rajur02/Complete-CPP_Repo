/*
Check if a number is prime or not
Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2..

Example 1:
Input:N = 2
               
Output:True
                
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
Example 2:
Input:N =10                
                
Output: False
                
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10. 
*/

#include<bits/stdc++.h>
using namespace std;

//brute force approach
bool isPrime(int n) {
    int count=0;
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            count++;
        }
    }
    if(count == 2) {
        return true;
    } else {
        return false;
    }
}

//optimal approach
bool isPrime1(int n) {
    int count=0;
    for(int i=1; i*i<=n; i++) {
        if(n%i==0) {
            count++;
            if(n/i != i) {
                count++;
            }
        }
    }
    if(count == 2) {
        return true;
    } else {
        return false;
    }
}

bool isPrime2(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    if(isPrime(n)) {
        cout << "Prime number" << endl;
    } else {
        cout << "Not prime number " << endl;
    }
    return 0;
}