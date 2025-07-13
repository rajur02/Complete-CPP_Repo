#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

void print_vec(const vector<int> vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    string str{"abc"};

    //next_permutation()
    cout << "The permutations of " << str << " are: " << endl;

    do{
        cout << str << endl;
    }while(next_permutation(begin(str), end(str)));

    /*The permutations of abc are: 
    abc
    acb
    bac
    bca
    cab
    cba*/

    //prev_permutation()
    sort(begin(str), end(str), [](int m, int n) {return m>n;});
    cout << "The permutations of " << str << " are: " << endl;

    do{
        cout << str << endl;
    }while(prev_permutation(begin(str), end(str)));

    /*The permutations of cba are:
    cba
    cab
    bca
    bac
    acb
    abc*/

    //is_permutation()
    vector<int> vec{3,1,4,1,5,9};
    vector<int> vec1{1,3,4,6,1,9};

    cout << "vec: ";
    print_vec(vec);
    cout << "vec1: ";
    print_vec(vec1);

    if(is_permutation(cbegin(vec), cend(vec), cbegin(vec1), cend(vec1))) {
        cout << "vec is a permutation of vec1" << endl;
    }
    else {
        cout << "vec is not a permutation of vec1" << endl;
    }
}