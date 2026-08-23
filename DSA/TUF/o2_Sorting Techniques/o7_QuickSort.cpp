/*
Quick Sort Algorithm
Problem Statement: Given an array of n integers, sort the array using the Quicksort method.

Examples
Input: N = 5, Arr[] = {4,1,7,9,3}
Output: {1, 3, 4, 7, 9}
Explanation: After sorting the array in ascending order it becomes 1, 3, 4, 7, 9
Input: N = 8, Arr[] = {4,6,2,5,7,9,1,3}
Output: {1, 2, 3, 4, 5, 6, 7, 9}
Explanation: After sorting the array in ascending order it becomes 1, 2, 3, 4, 5, 6, 7, 9
*/

#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(N*logN), At each step, we divide the whole array, for that we take logN time and n steps are taken for the partitioning. In worst case i.e. when our pivot is always the greatest or the smallest element of the array, the time complexity can be O(N^2).
Space Complexity: O(N), auxiliary stack space.
*/
int pIndex(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i=low, j=high;
    while(i<j) {
        while(arr[i]<=pivot && i<=high-1)
            i++;
        while(arr[j]>=pivot && j>=low+1)
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(vector<int>& arr, int low, int high) {

    if(low<high) {
        int partitionIndex = pIndex(arr, low, high);
        QuickSort(arr, low, partitionIndex-1);
        QuickSort(arr, partitionIndex+1, high);
    }
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
    QuickSort(v, 0, v.size()-1);
    cout << "After Sorting: ";
    for(int vec : v) {
        cout << vec << " ";
    }
    cout << endl;
    return 0;
}