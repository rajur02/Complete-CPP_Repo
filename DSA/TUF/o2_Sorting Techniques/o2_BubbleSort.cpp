/*
Bubble Sort Algorithm


25

Bubble Sort Algorithm .

Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

Examples

Example 1:
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5


Example 2:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force
Time Complexity: O(N2), (where N = size of the array), for the worst, and average cases.
Space Complexity: O(1).
*/
void BubbleSort(int n, int arr[]) {
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

/*
Optimized approach
-The best case occur if the given array is already sorted. We can reduce the time complexity to O(N) by just adding a small check inside the loops.
-We will check in the first iteration if any swap is taking place. If the array is already sorted no swap will occur and we will break out from the loops.
-Thus the iteration of the outer loop will be just 1. And our overall time complexity will be O(N).

Time Complexity:O(N2) for the worst and average cases and O(N) for the best case. Here, N = size of the array.
Space Complexity:O(1)
*/

void BubbleSortOpt(int n, int arr[]) {
    for(int i=n-1; i>=0; i--) {
        int didSwap = 0;
        for(int j=0; j<i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        cout << "First loop called: " << endl;
        if(didSwap==0) 
            break;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    // BubbleSort(n, arr);
    BubbleSortOpt(n, arr);
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}