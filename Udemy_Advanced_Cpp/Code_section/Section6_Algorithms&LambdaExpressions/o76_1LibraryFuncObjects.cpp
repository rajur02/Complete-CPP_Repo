#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<string> names {"Asok", "Ted", "Alice", "Dilbert", "PHB", "Dogbert", "Wally"};

    cout << "Vector before sort(): " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
    cout << endl;

    sort(begin(names), end(names), greater<string>());

    cout << "Vector after sort(): " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
}