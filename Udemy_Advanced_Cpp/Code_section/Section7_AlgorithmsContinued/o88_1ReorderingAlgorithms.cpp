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
    //reverse()
    vector<int> vec1{3,1,4,1,5,9};
    vector<int> vec2;

    cout << "original vector: ";
    print_vec(vec1);

    copy(cbegin(vec1), cend(vec1), back_inserter(vec2));

    reverse(begin(vec1), end(vec1));
    cout << "Result of reverse: ";  //Result of reverse: 9, 5, 1, 4, 1, 3,
    print_vec(vec1);

    //using loop
    size_t len(vec2.size()-1);
    for(int i=0; i<=len/2-1; ++i) {
        int temp{vec2[i]};
        vec2[i]=vec2[len-i];
        vec2[len-i] = temp; 

        //swap(vec2[i], vec2[len-i]);
    }    
    cout << "Result of loop reversal: ";  //Result of loop reversal: 9, 5, 1, 4, 1, 3,
    print_vec(vec2); 

    //rotate()
    vector<int> vec3{1,2,3,4,5};
    auto pivot = begin(vec3);
    advance(pivot, 2);
    auto res = rotate(begin(vec3), pivot, end(vec3));
    cout << "Result of rotate: ";  //Result of rotate: 3, 4, 5, 1, 2,
    print_vec(vec3);

    cout << "The original first element was: " << *res << endl; //The original first element was: 1

    //rotate_copy
    vector<int> vec4{1,2,3,4,5};
    vector<int> vec5(vec4.size());
    auto pivot1 = begin(vec4);
    advance(pivot1, 2);
    auto res1 = rotate_copy(begin(vec4), pivot1, end(vec4), begin(vec5));
    cout << "Result of rotate: ";  //Result of rotate: 3, 4, 5, 1, 2,
    print_vec(vec5);

    cout << "Last element copied was: " << *(res1-1) << endl; //Last element copied was: 2

}