/* Problem Description: Given an integer N, write a program to print your name N times.

Examples
Input: N = 3
Output: Ashish Ashish Ashish 
Explanation: Name is printed 3 times.
Input: N = 1
Output: Ashish 
Explanation: Name is printed once.

*/

#include<bits/stdc++.h>
using namespace std;

void fun(int n, const string& name) {
    if(n==0) {
        return; 
    } else {
        cout << name << endl;
        fun(n-1, name);
    }
}

class Solution {
public:
    void printName(const string& name, int N, int count) {
        if(count >= N) {
            return;
        }
        cout << name << endl; 
        printName(name, N, count+1);
    }

};

int main() {

    int n;
    string name;
    Solution s;
    cout << "Enter a number and name" << endl;
    cin >> n >> name;
    fun(n, name);
    s.printName(name, n, 0);
    return 0;
}