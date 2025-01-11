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

    //remove_if()
    auto defunct = remove_if(begin(vec), end(vec), [](int n) {return (n%3 == 0);});
    vec.erase(defunct, end(vec));

    cout << "Result after calling remove_if(): ";  //Result after calling remove_if(): 1, 4, 1, 5, 
    print_vec(vec);

    //remove_copy()
    vector<int> vec1{3,1,4,1,5,9};
    vector<int> vec2;
    remove_copy(cbegin(vec1), cend(vec1), back_inserter(vec2),1);

    cout << "Result after remove_copy(): ";  //Result after remove_copy(): 3, 4, 5, 9,
    print_vec(vec2);

    //copy_if()
    vector<int> vec3;
    copy_if(cbegin(vec1), cend(vec1), back_inserter(vec3), [](int n) {return n != 1;});

    cout << "Result after copy_if(): ";  //Result after if(): 3, 4, 5, 9,
    print_vec(vec3);

    //remove_copy_if()
    vector<int> vec4;
    remove_copy_if(cbegin(vec1), cend(vec1), back_inserter(vec4), [](int n) {return (n%3==0);});

    cout << "Result after remove_copy_if(): ";  //Result after remove_copy_if(): 1, 4, 1, 5,
    print_vec(vec4);

    //copy_if()
    vector<int> vec5;
    copy_if(cbegin(vec1), cend(vec1), back_inserter(vec5), [](int n) {return (n%3!=0);});

    cout << "Result after copy_if(): ";  //Result after copy_if(): 1, 4, 1, 5,
    print_vec(vec5); 

}