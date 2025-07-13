#include<iostream>
#include<array>

using namespace std;

//built-in array as pointer to int and number of elements n
void somefunc(int *pi, int n) {
    for(int i=0; i<n; ++i) {
        cout << pi[i] << ", ";
    }
    cout << endl;
}

void somefunc(array<int, 5> arr) {
    for(auto el : arr) {
        cout << el << ", ";
    }
    cout << endl;
}

int main()
{
    std::array<int, 5> arr{1,2,3,4,5};
    cout << "arr[3]: " << arr[3] << endl;

    //arr[2] = 6;
    //cout << "after assignment arr[2] is: " << arr[2] << endl;

    cout << "Iterator loop" << endl;
    for(auto it = begin(arr); it!=end(arr); ++it) {
        cout << *it << ", ";
    }
    cout << endl;

    cout << "Range for loop" << endl;
    for(auto el : arr) {
        cout << el << ", ";
    }
    cout << endl;

    cout << "indexed loop" << endl;
    for(size_t i=0; i<arr.size(); ++i) {
        cout << arr[i] << ", ";
    } 
    cout << endl;

    std::array<int, 5> five_ints;
    five_ints = arr;

    cout << "Elements of five_ints" << endl;
    for(auto el : five_ints) {
        cout << el << ", ";
    }
    cout << endl;

    //array with function calls
    cout << "Built-in array" << endl;
    int arr1[] = {1,2,4,5,6};
    int n = sizeof(arr1)/sizeof(arr[0]);
    somefunc(arr1, n);

    cout << "std::array" << endl;
    somefunc(arr);
}