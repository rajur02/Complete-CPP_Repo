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

    //unique()
    sort(begin(vec), end(vec));
    cout << "sorted vector: ";
    print_vec(vec);

    cout << "Before calling unique(), the vector has: " << vec.size() << " elements" << endl;  //Before calling unique(), the vector has: 6 elements
    auto defunct = unique(begin(vec), end(vec));
    print_vec(vec);  //1, 3, 4, 5, 9, 9,

    cout << "Before calling erase(), the vector has: " << vec.size() << " elements" << endl;  //Before calling erase(), the vector has: 6 elements
    vec.erase(defunct, end(vec));
    cout << "Before calling erase(), the vector has: " << vec.size() << " elements" << endl;  //Before calling erase(), the vector has: 5 elements
    print_vec(vec);  //1, 3, 4, 5, 9,

    //unique() with Predicate
     vector<int> vec1{3,1,4,1,5,9};

    sort(begin(vec1), end(vec1));
    cout << "sorted vector: ";
    print_vec(vec1);

    cout << "Before calling unique(), the vector has: " << vec1.size() << " elements" << endl;  //Before calling unique(), the vector has: 6 elements
    auto defunct1 = unique(begin(vec1), end(vec1), [](int m, int n) {return (n==m+1);});
    vec1.erase(defunct1, end(vec1));
    cout << "Result after unique & erase: ";  //Result after unique & erase: 1, 1, 3, 5, 9,
    print_vec(vec1);

    //unique_copy()
    vector<int> vec2{3,1,4,1,5,9};
    vector<int> vec3;

    sort(begin(vec2), end(vec2));
    cout << "sorted vector: ";
    print_vec(vec2);

    cout << "Before calling unique(), the vector has: " << vec2.size() << " elements" << endl;  //Before calling unique(), the vector has: 6 elements
    unique_copy(begin(vec2), end(vec2), back_inserter(vec3), [](int m, int n) {return (n==m+1);});
    cout << "Result after unique_copy: ";  //Result after unique_copy: 1, 1, 3, 5, 9, 
    print_vec(vec3);
}