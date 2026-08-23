/*
Count frequency of each element in the array
Problem Statement: Given an array, we have found the number of occurrences of each element in the array.

Examples
Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	    5  2
        15  1
Explanation: 10 occurs 3 times in the array
	      5 occurs 2 times in the array
              15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	    3  1
        4  2
Explanation: 2 occurs 3 times in the array
	     3 occurs 1 time in the array
             4 occurs 2 time in the array
            
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force Approach
Time Complexity: O(N²), as for every element we may scan the remaining elements in the array.
Space Complexity: O(N), for the visited array of size N.
*/
class Solution {
public:
    void CountFreqOfElement(int n) {
        int arr[n];
        cout << "Enter the elements: " << endl;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }

        int q, number;
        cout << "Enter the number of queries: ";
        cin >> q;
        for(int i=0; i<q; i++) {
            int count=0;
            cout << "Enter the number: ";
            cin >> number;
            for(int j=0; j<n; j++) {
                if(arr[j] == number)
                    count++;
            }
            cout << number << " occurs " << count << " times in the array" << endl;
        }
    }
};

void countFreq() {
    // Input array
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<bool> visited(n, false);
    for(int i=0; i<n; i++) {
        if(visited[i] == true)
            continue;

        int count = 1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]){
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << " occurs " << count << " times " << endl;  
    }
}

/*
Optimal Approach -- using hash array
*/
class Solution1 {
public:
    void countFreq(int n) {
        int arr[n];
        int hashArr[20]={0};
        cout << "Enter the elements: " << endl;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            hashArr[arr[i]]++;
        }

        int q, number;
        cout << "Enter the number of queries: ";
        cin >> q;
        while (q--) {
            int number;
            cout << "Enter the number to query: ";
            cin >> number;
            // fetching:
            cout << number << " occurs " << hashArr[number] << " times" << endl;
        }
    }
};

/*
Optimal Approach -- using hash map
Time Complexity: O(N), where N is the number of elements in the array. Each element is processed once.
Space Complexity: O(N), for storing frequencies of unique elements in the unordered_map.
*/
class Solution2 {
public:
    void countFreq(int n) {
        int arr[n];
        unordered_map<int, int> hash;
        cout << "Enter the elements: " << endl;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            hash[arr[i]]++;
        }

        // Traverse through the unordered_map and print frequencies
        for (auto x : hash) {
            cout << x.first << " " << x.second << endl;
        }
        int q, number;
        cout << "Enter the number of queries: ";
        cin >> q;
        for(int i=0; i<q; i++) {
            cout << "Enter the number to query: ";
            cin >> number;
            cout << number << " occurs " << hash[number] << " times" << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    //Solution s;
    //s.CountFreqOfElement(n);
    //countFreq();
    Solution1 s1;
    s1.countFreq(n);
    // Solution2 s2;
    // s2.countFreq(n);
    return 0;
}