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
    vector<int> vec{3,1,4,1,5,9,2,8,6};
    partition(begin(vec), end(vec), [](int n) {return n%2==1;});
    cout << "Vector after partition: ";  //Vector after partition: 3, 1, 9, 1, 5, 4, 2, 8, 6, 
    print_vec(vec);

    //stable_partition()
    vector<int> vec1{3,1,4,1,5,9,2,8,6};

    if(is_partitioned(cbegin(vec1), cend(vec1), [](int n) {return n%2==1;})) {
        cout << "vec is partitioned by oddness" << endl;
    }
    else {
        cout << "vec is not partitioned by oddness" << endl;  //vec is not partitioned by oddness
    }
    stable_partition(begin(vec1), end(vec1), [](int n) {return n%2==1;});
    cout << "Vector after stable_partition: ";  //Vector after stable_partition: 3, 1, 1, 5, 9, 4, 2, 8, 6, 
    print_vec(vec1);

    //is_partitioned()
    if(is_partitioned(cbegin(vec1), cend(vec1), [](int n) {return n%2==1;})) {
        cout << "vec is partitioned by oddness" << endl;   //vec is partitioned by oddness

        auto ppoint = partition_point(cbegin(vec1), cend(vec1), [](int n) {return n%2==1;});
        if (ppoint != cend(vec1)) {
            cout << "The partition point is an element with value " << *ppoint << " which is at index " << distance(cbegin(vec1), ppoint) << endl;
            //The partition point is an element with value 4 which is at index 5
        }
    }
    else {
        cout << "vec is not partitioned by oddness" << endl;
    }
}