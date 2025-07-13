#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec {1,2,3};

    cout << "Vector: ";
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;

    auto el2 = next(begin(vec));
    auto it = inserter(vec,el2);

    *it = 99;

    cout << "Vector after insert: ";
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}