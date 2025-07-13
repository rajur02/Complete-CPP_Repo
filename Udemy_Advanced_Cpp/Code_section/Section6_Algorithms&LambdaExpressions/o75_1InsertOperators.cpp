#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "Vector has " << vec.size() << " elements" << endl;

    cout << "Calling back inserter" << endl;
    auto it = back_inserter(vec);

    cout << "Assigning to insert iterator" << endl;
    *it = 99;
    *it = 88;

    cout << "Vector has " << vec.size() << " elements" << endl;

    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}