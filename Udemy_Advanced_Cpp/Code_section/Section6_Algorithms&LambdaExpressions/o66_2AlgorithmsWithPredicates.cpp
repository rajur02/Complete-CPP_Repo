#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//using Prediacte function
/* bool is_shorter(const string& lhs, const string& rhs) {
    return (lhs.size() < rhs.size());
} */

//using Prediacate functor
class is_shorter {
public: 
    bool operator() (const string& lhs, const string& rhs) {
        return lhs.size() < rhs.size();
    }
};

int main()
{
    vector<string> names {"Dilbert", "PHB", "Dogbert", "Asok", "Ted", "Alice", "Wally"};

    cout << "Vector before sort: " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
    cout << endl;

    sort(begin(names), end(names));

    cout << "Sorted alphabetically: " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
    cout << endl;

    sort(begin(names), end(names), is_shorter());

    cout << "Sorted by length: " << endl;
    for(auto name : names) {
        cout << name << ", ";
    }
    cout << endl;
    
}