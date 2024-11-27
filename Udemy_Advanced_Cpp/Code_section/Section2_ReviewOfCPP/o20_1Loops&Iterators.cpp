#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str{"Hello"};
    cout << "Iterator: ";
    for(auto itr=str.begin(); itr!=str.end(); ++itr) {
        cout << *itr << ", ";
    }

    cout << endl << "Const iterator: ";
    for(auto itr=str.cbegin(); itr!=str.cend(); ++itr) {
        cout << *itr << ", ";
    }

    cout << endl << "Reverse iterator: ";
    for(auto itr=str.rbegin(); itr!=str.rend(); ++itr) {
        cout << *itr << ", ";
    }

    cout << endl << "const reverse iterator: ";
    for(auto itr=str.crbegin(); itr!=str.crend(); ++itr) {
        cout << *itr << ", ";
    }

    int arr[] {1,2,3,4,5};

    cout << endl << "Iterator: ";
    for(auto it=begin(arr); it!=end(arr); ++it) {
        cout << *it << ", ";
    }

    cout << endl << "const iterator: ";
    for(auto it=cbegin(arr); it!=cend(arr); ++it) {
        cout << *it << ", ";
    }

    cout << endl << "Reverse iterator: ";
    for(auto it=rbegin(arr); it!=rend(arr); ++it) {
        cout << *it << ", ";
    }

    cout << endl<< "const reverse iterator: ";
    for(auto it=crbegin(arr); it!=crend(arr); ++it) {
        cout << *it << ", ";
    }

    vector<int> vec {1,2,3,4};

    cout << endl << "Vector elements: ";
    for(auto el : vec) {
        cout << el << ", ";
    }

    cout << endl << "Adding 2 to each element: ";
    for(auto& el : vec) {
        el+=2;
        cout << el << ", ";
    }

    // cout << endl << "Modified vector elements: ";
    // for(auto el : vec) {
    //     cout << el << ", ";
    // }
}