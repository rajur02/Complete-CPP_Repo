#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<cmath>
using namespace std;

void print_vec(const vector<int> vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{   
    vector<int> vec1{1,3,6,10,15};
    vector<int> vec2{1,2,3,4,5};

    cout << "vec1: ";
    print_vec(vec1);
    cout << "vec2: ";
    print_vec(vec2);

    auto result = inner_product(cbegin(vec1), cend(vec1), cbegin(vec2),0);

    cout << "The inner product of vec1 and vec2: " << result << endl;  //The inner product of vec1 and vec2: 140

    vector<int> vec3;
    transform(cbegin(vec1), cend(vec1), cbegin(vec2), back_inserter(vec3), multiplies<int>());
    auto result2 = accumulate(cbegin(vec3), cend(vec3),0);

    cout << "The result of transform+accumulate is: " << result2 << endl;  //The result of transform+accumulate is: 140

    //overloaded inner_product()
    vector<double> expexted{0.1,0.2,0.3,0.4,0.5};
    vector<double> actual{0.09,0.22,0.27,0.41,0.52};

    auto max_off = inner_product(begin(expexted), end(expexted), begin(actual), 0.0,
                                [](auto a, auto b) { return max(a,b); },
                                [](auto l, auto r) { return fabs(r-l);});

    cout << "max difference is: " << max_off << endl;  //max difference is: 0.03
}