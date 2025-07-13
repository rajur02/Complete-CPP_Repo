#include<iostream>
#include<algorithm>
#include<numeric>
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
    vector<int> vec{1,2,3,4,5};
    vector<int> vec1;

    cout << "Source vector: ";  //Source vector: 1, 2, 3, 4, 5, 
    print_vec(vec);

    //partial_sum()
    partial_sum(cbegin(vec), cend(vec), back_inserter(vec1));

    cout << "vector after partial_sum: ";  //vector after partial_sum: 1, 3, 6, 10, 15,
    print_vec(vec1);

    //adjacent_difference()
    vector<int> vec2;
    adjacent_difference(cbegin(vec1), cend(vec1), back_inserter(vec2));

    cout << "vector after adjacent_difference ";  //vector after adjacent_difference 1, 2, 3, 4, 5,
    print_vec(vec2);

    //inner_product()
    auto result = inner_product(cbegin(vec), cend(vec), cbegin(vec1), 0);
    cout << "The inner of vec and vec1 is: " << result << endl;  //The inner of vec and vec1 is: 140
}