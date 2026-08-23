/*
Insertion Sort Algorithm
Problem Statement: Given an array of integers called nums, sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.

Examples
Example 1:
Input:
  nums = [7, 4, 1, 5, 3]  
Output:
  [1, 3, 4, 5, 7]  
Explanation:
  The array is sorted in non-decreasing order: 1 ≤ 3 ≤ 4 ≤ 5 ≤ 7.

Example 2:
Input:
  nums = [5, 4, 4, 1, 1]  
Output:
  [1, 1, 4, 4, 5]  
Explanation:
  The array is sorted in non-decreasing order: 1 ≤ 1 ≤ 4 ≤ 4 ≤ 5.

Approach
Algorithm
-In each iteration, select an element from the unsorted part of the array using an outer loop.
-Place this selected element in its correct position within the sorted part of the array.
-Use an inner loop to shift the remaining elements, if necessary, to accommodate the selected element. This involves shifting elements by one position until the selected element can be placed in the correct position.
-Continue this process until the entire array is sorted.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(n^2), where n is the number of elements in the array. This is because, in the worst case, we may have to compare each element with all the previous elements.
Space Complexity: O(1), as we are sorting the array in place and not using any additional data structures that grow with input size.
*/
void InsertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n; i++) {
       
        int j=i;
        while(j>0 && arr[j-1]>arr[j]) {
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
} 

void insertionSort1(vector<int>& nums) {
    int n = nums.size(); // Size of the array 
    
    // For every element in the array 
    for (int i = 1; i < n; i++) {
        int key = nums[i]; // Current element as key 
        int j = i - 1; 
            
        // Shift elements that are greater than key by one position
         while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }
            
        nums[j + 1] = key; // Insert key at correct position
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
    InsertionSort(v);
    cout << "After Sorting: ";
    for(int vec : v) {
        cout << vec << " ";
    }
    cout << endl;
    return 0;
}