/*You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 <= n <= 2. 10^5

Example
Input:
5
2 3 1 5

Output:
4
*/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n-1);
    cout << "Enter the elements: ";
    for(int i=0; i<n-1; i++) {
        cin >> v[i];
    }
    int sum = (n*(n+1))/2;
    for(int i=0; i<n-1; i++) {
        sum-=v[i];
    }
    cout << "The missing element is: " << sum << endl;

    //one more solution with long long int to avoid overflow
    long long int n1, s=0, ele;
    cout << "Enter the number of elements: ";
    cin >> n1;
    for(int i=0; i<n1-1; i++) {
        cin >> ele;
        s+=ele;
    }

    cout << "missing element is: " << (n1*(n1+1)/2) - s << endl;
    

    //one more solution with bitwise XOR operator
    long long n;
    cin >> n;

    long long xorFull = 0, xorGiven = 0;

    for (long long i = 1; i <= n; i++)
        xorFull ^= i;          // XOR of 1 to n

    long long ele;
    for (long long i = 0; i < n - 1; i++) {
        cin >> ele;
        xorGiven ^= ele;       // XOR of given numbers
    }

    cout << (xorFull ^ xorGiven) << endl;  // missing number
}