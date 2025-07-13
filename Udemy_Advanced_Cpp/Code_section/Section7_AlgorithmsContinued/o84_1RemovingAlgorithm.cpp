#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print_vec(const vector<int> vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec{3,1,4,1,5,9};
    cout << "original vector: ";
    print_vec(vec);

    //remove()
    cout << "Before calling remove, the vector has: " << vec.size() << " elements" << endl;  //Before calling remove, the vector has: 6 elements

    auto defunct = remove(begin(vec), end(vec), 1);

    cout << "Result of removal: "; //Result of removal: 3, 4, 5, 9, 5, 9,
    print_vec(vec);

    //erase()
    cout << "Before calling erase, the vector has: " << vec.size() << " elements" << endl;  //Before calling erase, the vector has: 6 elements
    vec.erase(defunct, end(vec));

    cout << "After calling erase, the vector has: " << vec.size() << " elements" << endl;  //After calling erase, the vector has: 4 elements
    cout << "Vec after erase: ";  //Vec after erase: 3, 4, 5, 9,
    print_vec(vec);
}