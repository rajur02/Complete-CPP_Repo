/*
Recursive Insertion Sort Algorithm
Problem Statement: Given an array of N integers, write a program to implement the Recursive Insertion Sort algorithm.

Examples
Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Example 2:
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
*/

#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
Space Complexity: O(N) auxiliary stack space.
*/
void RInsertionSort(vector<int>& arr, int n, int i) {
    if(i==n)    
        return;
    int j = i;
    while(j>0 && arr[j-1] > arr[j]) {
        swap(arr[j-1], arr[j]);
        j--;
    }
    RInsertionSort(arr, n, i+1);
}

int main() {
    int n; 
    cout << "Enter the elements: ";
    cin >> n;
    vector<int> v(n, 0);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    RInsertionSort(v, v.size(), 0);
    cout << "After Sorting: ";
    for(int vec : v) {
        cout << vec << " ";
    }
    cout << endl;
    return 0;
}