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
    //merge()
    vector<int> vec1{3,1,4,1,5,9};
    vector<int> vec2{3,1,4,2,8};
    
    sort(begin(vec1), end(vec1));
    cout << "vec1: ";
    print_vec(vec1);

    sort(begin(vec2), end(vec2));
    cout << "vec2: ";
    print_vec(vec2);

    vector<int> vec3;
    merge(cbegin(vec1), cend(vec1), cbegin(vec2), cend(vec2), back_inserter(vec3));  
    cout << "Result of merging vec1 and vec2: ";  //Result of merging vec1 and vec2: 1, 1, 1, 2, 3, 3, 4, 4, 5, 8, 9,
    print_vec(vec3);

    //set_intersection()
    vector<int> vec4;
    set_intersection(cbegin(vec1), cend(vec1), cbegin(vec2), cend(vec2), back_inserter(vec4));  
    cout << "Result of set_intersection vec1 and vec2: ";  //Result of set_intersection vec1 and vec2: 1, 3, 4,
    print_vec(vec4);

    //set_union()
    vector<int> vec5;
    set_union(cbegin(vec1), cend(vec1), cbegin(vec2), cend(vec2), back_inserter(vec5));  
    cout << "Result of set_union vec1 and vec2: ";  //Result of set_union vec1 and vec2: 1, 1, 2, 3, 4, 5, 8, 9,
    print_vec(vec5);



}