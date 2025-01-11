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
    

    //transform()
    vector<int> vec1;
    transform(cbegin(vec), cend(vec), back_inserter(vec1), [](int n) {return n*2;});

    cout << "vec1: ";  //vec1: 6, 2, 8, 2, 10, 18,
    print_vec(vec1);

    //Equivalent loop
    vector<int> vec2;
    for(auto v : vec) 
        vec2.push_back(2*v);
    cout << "vec2: ";
    print_vec(vec2);  //vec2: 6, 2, 8, 2, 10, 18,

    //double elements in vec
    transform(begin(vec), end(vec), begin(vec), [](int n) {return n*2;});
    cout << "vec: ";  //vec: 6, 2, 8, 2, 10, 18,
    print_vec(vec);
    
    //Equivalent for loop
    vector<int> vec3 {3,1,4,1,5,9};
    for(auto& v : vec3) 
        v = 2*v;
    cout << "vec3: ";
    print_vec(vec3);  //vec3: 6, 2, 8, 2, 10, 18,

    //transorm() overloaded
    vector<int> vec4;
    transform(cbegin(vec), cend(vec), cbegin(vec1), back_inserter(vec4), [](int n1, int n2) { return n1+n2;});
    cout << "vec4: ";  //vec4: 12, 4, 16, 4, 20, 36,
    print_vec(vec4);

    //using for loop
    vector<int> vec5;
    for(int i=0; i<vec.size(); ++i) {
        vec5.push_back(vec[i]+vec1[i]);
    }
    cout << "vec5: ";  //vec5: 12, 4, 16, 4, 20, 36,
    print_vec(vec5); 

    
} 