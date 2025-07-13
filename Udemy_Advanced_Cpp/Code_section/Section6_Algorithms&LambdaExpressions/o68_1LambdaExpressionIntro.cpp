#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec {3,1,4,1,5,9};

    auto res = find_if( cbegin(vec), cend(vec), [] (int n) { return (n%2 == 1);} );

    if(res != cend(vec)) {
        cout << "First odd element is: " << *res << endl;
    }
}