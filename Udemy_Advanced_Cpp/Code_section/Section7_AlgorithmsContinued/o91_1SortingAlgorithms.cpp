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
    string keys{"qwertyuiopasdfghjkl"};
    cout << "Keys: " << keys << endl;

    //partial_sort()
    auto it = begin(keys);
    partial_sort(it, it+5, end(keys));

    cout << "First 5 charactes of the keys are: " << keys.substr(0, 5) << endl;  //First 5 charactes of the keys are: adefg
    cout << "Full Keys string: " << keys << endl;  //Full Keys string: adefgywutrqspoihjkl

    advance(it, 5);
    partial_sort(it, it+5, end(keys));
    cout << "The next 5 characters of the keys are: " << keys.substr(5,5) << endl;  //The next 5 characters of the keys are: hijkl
    cout << "Full Keys string: " << keys << endl;  //Full Keys string: adefghijklywutsrqpo

    //partial_sort_copy()
    string keys1{"qwertyuiopasdfghjkl"};
    string dest(5, ' ');
    partial_sort_copy(cbegin(keys1), cend(keys1), begin(dest), end(dest));
    cout << "The next 5 characters of the keys1 are: " << dest << endl;  //The next 5 characters of the keys1 are: adefg
    cout << "Full Keys1 string: " << keys1 << endl;   //Full Keys1 string: qwertyuiopasdfghjkl

    //n_th element
    vector<int> vec{1,4,5,6,2,7,5};
    vector<int> vec1{vec};
    sort(begin(vec1), end(vec1));

    cout << "vec: ";  //vec: 1, 4, 5, 6, 2, 7, 5,
    print_vec(vec);

    cout << "vector if sorted: ";  //vector if sorted: 1, 2, 4, 5, 5, 6, 7,
    print_vec(vec1);

    cout << endl << "calling nth_element" << endl;

    auto mid = begin(vec) + 4;
    nth_element(begin(vec), mid, end(vec));  

    cout << "The mid element is: " << *mid << endl;  //The mid element is: 5
    cout << "vec: ";  //vec: 5, 4, 1, 2, 5, 6, 7,
    print_vec(vec); 
}