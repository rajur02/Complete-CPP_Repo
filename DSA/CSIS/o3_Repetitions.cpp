/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 <= n <= 10^6

Example
Input:
ATTCGGGA

Output:
3
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    long long int count=1, maxLen=1;
    cout << "Enter the string: ";
    string str;
    getline(cin, str);

    for(int i=1; i < str.size(); i++) {
        if(str[i] == str[i-1]) {
            count++;
            if(count > maxLen) maxLen = count;
        } else {
            count = 1;
        }
    }
    cout << "longest length is: " << maxLen << endl;


    //github solution-- 
    string s;
    cin >> s;
    int n = s.length(), best = 0, curr = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            best = max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = max(best, curr);
    cout << best;

    //best solution
    string s1;
    cin >> s1;
    int best1 = 1, curr1 = 1;

    for (int i = 1; i < s1.size(); i++) {
        curr1 = (s1[i] == s1[i-1]) ? curr1 + 1 : 1;
        best1 = max(best1, curr1);
    }

    cout << best1;

}