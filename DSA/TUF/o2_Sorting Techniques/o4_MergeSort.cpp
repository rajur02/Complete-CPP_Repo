/*
Merge Sort Algorithm
Problem Statement: Given an array of size n, sort the array using Merge Sort.

Examples
Input : N=7,arr[]={3,2,8,5,1,4,23}
Output : {1,2,3,4,5,8,23}
Explanation : Given array is sorted in non-decreasing order.
Input : N=5, arr[]={4,2,1,6,7}
Output : {1,2,4,6,7}
Explanation : Given array is sorted in non-decreasing order.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Complexity Analysis
Time Complexity: O(N*logN), merging two arrays take linear time and array is recursively divided into halves (logN times).
Space Complexity: O(N), we use a temporary array to store elements in sorted order.
*/
void Merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left=low, right=mid+1;
    while(left<=mid && right <=high) {
        if(arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else    
            temp.push_back(arr[right++]);
    }

    while(left <= mid) {
        temp.push_back(arr[left++]);
    }
    
    while(right <= high) {
        temp.push_back(arr[right++]);
    }

    for(int i=low; i <= high; i++) {
        arr[i] = temp[i-low];
    }

}

void MergeSort(vector<int>& arr, int low, int high) {
    if(low>=high) 
        return;
    int mid = (low+high)/2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);
    Merge(arr, low, mid, high);
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
    MergeSort(v, 0, v.size()-1);
    cout << "After Sorting: ";
    for(int vec : v) {
        cout << vec << " ";
    }
    cout << endl;
    return 0;
}