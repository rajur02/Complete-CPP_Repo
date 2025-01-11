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

    //copy()
    cout << "vec: ";
    print_vec(vec);

    vector<int> vec2(vec.size());
    copy(cbegin(vec), cend(vec), begin(vec2));

    cout << "vec2: ";
    print_vec(vec2);

    vector<int> vec3;
    copy(cbegin(vec), cend(vec), back_inserter(vec3));

    cout << "vec3: ";
    print_vec(vec3);

    vector<int> vec4;
    for(auto v:  vec) {
        vec4.push_back(v);
    }
    cout << "vec4: ";
    print_vec(vec4);

    //copy_n()
    vector<int> vec5;
    copy_n(cbegin(vec), 2, back_inserter(vec5));
    cout << "vec5: ";
    print_vec(vec5);

    vector<int> vec6;
    for(int i=0; i<2; ++i) {
        vec6.push_back(vec[i]);
    }
    cout << "vec6: ";
    print_vec(vec6);

    //copy_if()
    vector<int> vec7;
    copy_if(cbegin(vec), cend(vec), back_inserter(vec7), [](int n) {return n%2==1;});
    cout << "vec7: ";
    print_vec(vec7);

    vector<int> vec8;
    for(auto v : vec) {
        if(v%2 == 1) {
            vec8.push_back(v);
        }
    }
    cout << "vec8: ";
    print_vec(vec8);
}