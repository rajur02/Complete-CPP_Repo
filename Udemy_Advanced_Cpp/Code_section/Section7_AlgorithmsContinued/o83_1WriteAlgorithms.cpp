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

    //replace()
    cout<< "vec: ";
    print_vec(vec);

    replace(begin(vec), end(vec), 1, 2);

    cout << "Vector after replace: ";   //Vector after replace: 3, 2, 4, 2, 5, 9
    print_vec(vec);

    vector<int> vec2{3,1,4,1,5,9};
    for(auto& v: vec2) {
        if(v==1)
            v=2;
    }
    cout << "Vector after loop: ";  //Vector after loop: 3, 2, 4, 2, 5, 9,
    print_vec(vec2);

    //replace_if()
    vector<int> vec3{3,1,4,1,5,9};
    replace_if(begin(vec3), end(vec3), [](int n) {return (n%2==0);}, 6);
    cout << "vec3: ";
    print_vec(vec3);  //vec3: 3, 1, 6, 1, 5, 9,

    vector<int> vec4{3,1,4,1,5,9};
    for(auto& v: vec4) {
        if(v%2==0)
            v=6;
    }
    cout << "vec4: ";  //vec4: 3, 1, 6, 1, 5, 9,
    print_vec(vec4);

    //replace_copy()
    vector<int> vec5;
    replace_copy(cbegin(vec), cend(vec), back_inserter(vec5),1, 2);

    cout << "Vector after replace_copy: ";   //Vector after replace_copy: 3, 2, 4, 2, 5, 9, 
    print_vec(vec5);

    vector<int> vec6;
    for(auto v : vec) {
        if(v==1) 
            vec6.push_back(2);
        else    
            vec6.push_back(v);
    }
    cout << "Vector after replace_copy loop: ";  //Vector after replace_copy loop: 3, 2, 4, 2, 5, 9,
    print_vec(vec6);

    //replace_copy_if()
    vector<int> vec7;
    replace_copy_if(cbegin(vec), cend(vec), back_inserter(vec7), [](int n) {return (n%2==0);}, 6);
    cout << "vec7: ";  //vec7: 3, 6, 6, 6, 5, 9,
    print_vec(vec7);

    vector<int> vec8;
    for(auto v: vec) {
        if(v%2==0)
            vec8.push_back(6);
        else
            vec8.push_back(v);
    }
    cout << "vec8: ";  //vec8: 3, 6, 6, 6, 5, 9,
    print_vec(vec8);

}