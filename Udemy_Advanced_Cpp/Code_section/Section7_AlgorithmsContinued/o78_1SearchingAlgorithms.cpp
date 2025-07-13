#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

void print_vec(const vector<int>& vec) {
    for(auto v : vec) {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    //mismatch()
    vector<int> vec1{1,2,2,3,2,3,3};
    vector<int> vec2{1,2,2,2,2,3,3};

    cout << "vec1: ";
    print_vec(vec1);
    cout << "vec2: ";
    print_vec(vec2);

    auto elems = mismatch(cbegin(vec1), cend(vec1), cbegin(vec2), cend(vec2));

    if(elems.first != cend(vec1) && elems.second != cend(vec2)) {
        cout << "Found mismatch at index: " << distance(cbegin(vec1), elems.first) << endl;  //Found mismatch at index: 3
        cout << "vec1 has: " << *elems.first << ", vec2 has: " << *elems.second << endl;  //vec1 has: 3, vec2 has: 2
    }

    //all_of(), any_of(), none_of()
    vector<int> vec{3,1,4,1,5,9};

    cout << "vec: ";
    print_vec(vec);

    auto is_odd = [](int n) {return n%2==1; };
    auto is_even = [](int n) {return n%2==0; };

    if(all_of(cbegin(vec), cend(vec), is_odd))
        cout << "All elements of vecor are odd" << endl; 
    if(all_of(cbegin(vec), cend(vec), is_even))
        cout << "All elements of vecor are even" << endl;
    if(any_of(cbegin(vec), cend(vec), is_odd))
        cout << "Some elements of vecor are odd" << endl;  //Some elements of vecor are odd
    if(any_of(cbegin(vec), cend(vec), is_even))
        cout << "Some elements of vecor are even" << endl; //Some elements of vecor are even
    if(none_of(cbegin(vec), cend(vec), is_odd))
        cout << "No elements of vecor are odd" << endl; 
    if(none_of(cbegin(vec), cend(vec), is_even))
        cout << "No elements of vecor are even" << endl;

    //binary_search()
    sort(begin(vec), end(vec));
    cout << "Sorted vector is: ";  //Sorted vector is: 1, 1, 3, 4, 5, 9,
    print_vec(vec);

    if(binary_search(cbegin(vec), cend(vec), 4))
        cout << "vec contains 4" << endl;   //vec contains 4
    else
        cout << "vec doesn't contains 4" << endl;

    if(binary_search(cbegin(vec), cend(vec), 8))
        cout << "vec contains 8" << endl;
    else
        cout << "vec doesn't contains 8" << endl;  //vec doesn't contains 8

    //includes()
    string str{"Hello includes all"};
    string vowels{"aeiou"};

    sort(begin(str), end(str));
    sort(begin(vowels), end(vowels));

    cout << "String to search: " << str << endl;  //String to search:   Hacdeeilllllnosu
    cout << "vowels: " << vowels << endl;  //vowels: aeiou

    if(includes(cbegin(str), cend(str), cbegin(vowels), cend(vowels)))
        cout << "String contains all the characters from vowels" << endl;
    else
        cout << "String does not contain all the characters from vowels" << endl;  //String contains all the characters from vowels
}