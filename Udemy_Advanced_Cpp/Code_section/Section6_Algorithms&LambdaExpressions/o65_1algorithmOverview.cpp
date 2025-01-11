#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str{"Hello World"};
    for(auto s : str) {
        cout << s << ", ";
    }
    cout << endl;

    auto res = find(cbegin(str), cend(str), 'l');
    cout << "Found matching element st index: " << res - str.cbegin() << endl;

    cout << "At this point in the string: ";
    for(auto it=res; it!=str.cend(); ++it) {
        cout << *it;
    }
    cout << endl;
}