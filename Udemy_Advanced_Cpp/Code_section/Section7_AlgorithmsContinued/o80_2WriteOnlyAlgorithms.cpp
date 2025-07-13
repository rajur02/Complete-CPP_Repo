#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class square {
private:
    int n{0};
public:
    int operator()() {++n; return n*n;};
};

void print_vec(const vector<int> vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    //generate()
    /* vector<int> vec(10);
    generate(begin(vec), end(vec), square());
    print_vec(vec); */

    //generate_n()
    vector<int> vec;
    generate_n(back_inserter(vec), 10, square());
    print_vec(vec);
}