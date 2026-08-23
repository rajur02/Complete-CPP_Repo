/*
Find the highest/lowest frequency element
Problem Statement: Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.


Example 2:
Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.
*/

#include<bits/stdc++.h>
using namespace std;

/*
Brute Force Approach
Time Complexity: O(N*N), where N = size of the array. We are using the nested loop to find the frequency.
Space Complexity: O(N), where N = size of the array. It is for the visited array we are using.
*/
void countHighAndLowFreq(int n, int arr[]) {
    vector<bool> visited(n, false);
    int maxFreq=0, minFreq=n;
    int maxEle=0, minEle=0;
    for(int i=0; i<n; i++) {
        if(visited[i] == true)
            continue;
        int count =1;
        for(int j=i+1; j<n; j++) {
            if(arr[i]==arr[j]) {
                count++;
                visited[i]=true;
            }
        }
        if(count > maxFreq) {
            maxFreq = count;
            maxEle = arr[i];
        }
        if(count < minFreq) {
            minFreq = count;
            minEle = arr[i];
        }
    }
    cout << "The highest frequency element is: " << maxEle << " with " << maxFreq << " times" << endl;
    cout << "The lowest frequency element is: " << minEle << " with " << minFreq << " times" << endl;
}

/*
Optimal Approach
Time Complexity: O(N), where N = size of the array. The insertion and retrieval operation in the map takes O(1) time.
Space Complexity: O(N), where N = size of the array. It is for the map we are using.
*/
void countHighAndLowFreqMap(int n, int arr[]) {
    unordered_map<int, int> map;
    for(int i=0; i<n; i++) {
        map[arr[i]]++;
    }

    int maxFreq=0, minFreq=n;
    int maxEle=0, minEle=0;
    for(auto v : map) {
        if(v.second > maxFreq) {
            maxFreq = v.second;
            maxEle = v.first;
        }

        if(v.second < minFreq) {
            minFreq = v.second;
            minEle = v.first;
        }
    }
    cout << "The highest frequency element is: " << maxEle << " with " << maxFreq << " times" << endl;
    cout << "The lowest frequency element is: " << minEle << " with " << minFreq << " times" << endl;
}


int main() {
    int arr[] = {2,2,3,4,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // countHighAndLowFreq(n, arr);
    countHighAndLowFreqMap(n, arr);
    return 0;
}