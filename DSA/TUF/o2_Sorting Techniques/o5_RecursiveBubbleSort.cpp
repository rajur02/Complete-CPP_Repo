/*
Recursive Bubble Sort Algorithm


18

Problem Statement: Given an array of N integers, write a program to implement the Recursive Bubble Sort algorithm.

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
Brute Force Approach
Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
Space Complexity: O(N) auxiliary stack space.
*/
void RBubbleSort(vector<int>& arr, int n) {
    if(n<=0)
        return;
    for(int j=0; j<n-1; j++) {
        if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
    }
    RBubbleSort(arr, n-1);
}

/*
Optimal Approach
Algorithm
We will check in the first recursion call if any swap is taking place. If the array is already sorted no swap will occur and we will return from the recursion call.
Thus the number of recursions will be just 1. And our overall time complexity will be O(N).

Time Complexity: O(N2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.
Space Complexity: O(N) auxiliary stack space.
*/
void RBubbleSort1(vector<int>& arr, int n) {
    if(n<=0)
        return;
    int didSwap = 0;
    for(int j=0; j<n-1; j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            didSwap = 1;
        }
    }
    if(didSwap == 0) return;
    RBubbleSort(arr, n-1);
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
    // RBubbleSort(v, v.size());
    RBubbleSort1(v, v.size());
    cout << "After Sorting: ";
    for(int vec : v) {
        cout << vec << " ";
    }
    cout << endl;
    return 0;
}