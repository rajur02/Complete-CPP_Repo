#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> names {"Dilbert", "PHB", "Dogbert", "Asok", "Ted", "Alice", "Wally"};

    cout << "Vector before sort: " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
    cout << endl;

    sort(begin(names),end(names));
    
    cout << "Vector before sort: " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
}