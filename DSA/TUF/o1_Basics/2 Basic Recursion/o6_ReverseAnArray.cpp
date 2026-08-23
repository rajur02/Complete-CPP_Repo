/*
Reverse a given Array
Problem Statement: You are given an array. The task is to reverse the array and print it.

Examples
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force Approach
Time Complexity: O(n) Each element is visited once in a loop, where n is the number of elements in the input array.
Space Complexity: O(n) An additional array of the same size is used to store the reversed elements.
*/
int* Reverse(int n, int arr[]) {
    int* result = new int[n];
    for(int i=n-1, j=0; i>=0; i--, j++) {
        result[j] = arr[i];
    }
    return result;
}

void printArr(int n, int* arr) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

class Solution {
public:
    vector<int> Reverse(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        for(int i=0; i<n; i++) {
            res[i] = arr[n-1-i];
        }
        return res;
    }
};

/*
Better Approach- two pointer approach
Time Complexity: O(n) Where n is the number of elements in the array. Each element is visited at most once due to the two-pointer approach.
Space Complexity: O(1) No extra space is used other than a few pointers and variables. The array is reversed in-place.
*/
class Solution1 {
public:
    void ReverseArray(vector<int>& arr) {
        int l=0, r=arr.size()-1;
        while(l<r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }
};

/*
Built-in Library Function Approach
Time Complexity: O(n), because each element is visited once and possibly swapped once with its mirror index.
Space Complexity: O(1) for C++, Java, and JavaScript (in-place), but O(n) for Python slicing since it creates a new list and then assigns back (unless using two pointers).
*/
class Solution2 {
public:
    void ReverseArray(vector<int>& arr) {
        reverse(arr.begin(), arr.end());
    }
};

//Using Recursion - using one iterator
void RReverseArr(int i, int arr[], int n) {
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    RReverseArr(i+1, arr, n);
}

//Using Recursion - using two iterator
void RReverseArr1(int l, int r, int arr[]) {
    if(l>=r) return;
    swap(arr[l], arr[r]);
    RReverseArr1(l+1, r-1, arr);
}

int main() {
    /*int n;  
    int *arr;
    int *result;
    cout << "Enter the number of elements: ";
    cin >> n;
    arr = new int[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    result = Reverse(n, arr);
    printArr(n, result);

    delete[] arr;
    delete[] result;

    vector<int> arr1 = {1,2,3,4,5};
    Solution s;
    vector<int> res = s.Reverse(arr1);
    cout << "Reversed number is: ";
    for(int num : res) {
        cout << num << " ";
    }
    cout << endl;

    Solution1 s1;
    vector<int> arr2 = {10, 20, 30, 40, 50};
    s1.ReverseArray(arr2);
    for(int num2 : arr2) {
        cout << num2 << " ";
    }
    cout << endl;

    Solution2 s2;
    vector<int> arr3 = {6,7,8,9,10};
    s2.ReverseArray(arr3);
    for(int num3 : arr3) {
        cout << num3 << " ";
    }
    cout << endl;*/

    int nR;
    cin >> nR;
    int arrR[nR];
    for(int i=0; i<nR; i++) cin >> arrR[i];
    RReverseArr(0, arrR, nR);
    for(int i=0; i<nR; i++) cout << arrR[i] << " ";
    cout << endl;
    RReverseArr1(0, nR-1, arrR);
    for(int i=0; i<nR; i++) cout << arrR[i] << " ";
    return 0;
}