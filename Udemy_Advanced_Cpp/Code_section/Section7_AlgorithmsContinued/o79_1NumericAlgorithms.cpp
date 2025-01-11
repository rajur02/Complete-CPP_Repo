#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void print_vec(const vector<int>& vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}
int main()
{
    //iota()
    vector<int> vec(10);
    iota(begin(vec), end(vec),1);

    cout << "vector populated by iota(): ";  //vector populated by iota(): 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
    print_vec(vec);

    vector<int> vec2(10);
    int n{1};
    for(auto& v : vec2) {
        v = n;
        ++n;
    }
    cout << "vector populated by for loop: ";  //vector populated by for loop: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    print_vec(vec2);

    //accumulate()
    vector<int> vec3{3,1,4,1,5,9};

    cout << "vec3: ";
    print_vec(vec3);

    auto sum = accumulate(cbegin(vec3), cend(vec3), 0);

    cout << "Sum calculated by algorithm: " << sum << endl;  //Sum calculated by algorithm: 23

    sum = 0;
    for(auto v: vec3) { 
        sum+=v;
    }
    cout << "Sum calculated by loop: " << sum << endl;  //Sum calculated by loop: 23

    //accumulate with callable object(lambda expression)
    sum = 0;
    sum = accumulate(cbegin(vec3), cend(vec3), 0, [](int sum, int n) {return (n%2==1) ? sum+n : sum; });

    cout << "Sum of odd elements is: " << sum << endl;  //Sum of odd elements is: 19
}