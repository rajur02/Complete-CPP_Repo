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
    //partition()
    vector<int> vec{3,1,4,1,5,9};
    cout << "Vector before sort: ";
    print_vec(vec);

    cout << "Vector is sorted " << boolalpha << is_sorted(cbegin(vec), cend(vec)) << endl;  //Vector is sorted false

    //sort with predicate
    //sort(begin(vec), end(vec), [](int m, int n) { return m>n; });
    sort(begin(vec), end(vec));

    cout << "Vector after sort: ";   //Vector after sort: 9, 5, 4, 3, 1, 1, 
    print_vec(vec);

    //is_sorted()
    cout << "Vector is sorted " << boolalpha << is_sorted(cbegin(vec), cend(vec)) << endl;  //Vector is sorted true

    //is_sorted_until()
    //partition()
    vector<int> vec1{1,4,5,6,2,7,5};
    cout << "Vector before sort: ";
    print_vec(vec1);

    auto el = is_sorted_until(cbegin(vec1), cend(vec1));

    if(el != cend(vec1)) {
        cout << "The first " << distance(cbegin(vec1), el) << " elements are sorted" << endl;  //The first 4 elements are sorted
        cout << "The first element which is not in order has value " << *el << endl;  //The first element which is not in order has value 2
    }
    else { 
        cout << "Could not find initial sequence which is sorted" << endl;   
    }

}