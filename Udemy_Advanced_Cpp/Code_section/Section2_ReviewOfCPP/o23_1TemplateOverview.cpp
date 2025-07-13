#include <iostream>
#include <vector>
using namespace std;

template <class T>
T Max(const T& t1, const T& t2) {
    if(t1>t2)
        return t1;
    return t2;
}

int main()
{
    cout << Max(7.0,2.6) << endl;

    //vector vec{1,2,3};   //Requires C++17 compiler
    vector<int> vec{1,2,3};
    for(auto it : vec)
        cout << it << ", ";
}