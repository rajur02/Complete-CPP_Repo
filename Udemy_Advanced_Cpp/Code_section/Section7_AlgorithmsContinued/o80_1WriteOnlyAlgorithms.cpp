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
    //fill()
    /* vector<int> vec(10);
    fill(begin(vec), end(vec), 42);
    cout << "Vector populated by fill()" << endl;
    print_vec(vec);

    vector<int> vec2(10);
    for(auto& v : vec2) {
        v = 42;
    }
    print_vec(vec2); */

    //fill_n()
    vector<int> vec(10);
    //vector<int> vec;

    //Resize the vector if it is empty
    /* if(vec.size() < 5) {
        vector<int> new_vec(5);
        vec.swap(new_vec);
    } */

    auto begin_rest = fill_n(begin(vec), 5, 42);
    fill(begin_rest, end(vec), 99);
    print_vec(vec);

    //using back_inserter()
    vector<int> vec2;
    auto begin_rest1 = fill_n(back_inserter(vec), 5, 42);

    /* for(int i=0; i<5; ++i) {
        vec.push_back(42);
    } */
    print_vec(vec2);

}