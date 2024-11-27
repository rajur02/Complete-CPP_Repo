#include <iostream>
#include <vector>
using namespace std;

class Test {};

void print(vector<int>& vec)
{
    for(auto v : vec)
        cout << v << ",";

    cout << endl;
}

int main()
{
    int x{7};   //Equivalent to int x = 7;
    string s{"Let us begin"};  //Equivalent to string s("Let us begin");

    cout << "x is: " << x << endl;
    cout << "s is \"" << s << "\"" << endl;

    //can be used with multiple initial values
    vector<int> vec{4,2,3,5,1};  //std::vector variable with elements 4,2,3,5,1
    cout << "vec= ";
    print(vec);

    //Narrowing conversions are not allowed
    int y=7.7;  //Legal, although compilers may warn
    //int y{7.7}; //illegal
    cout << "y is: " << y << endl;

    //Avoids inconsistency
    vector<int> old_one(4);
    vector<int> old_two(4, 2);
    vector<int> uni_one{2};
    vector<int> uni_two{4,2};

    cout << "old one: ";
    print(old_one);

    cout << "old two "; 
    print(old_two);

    cout << "uni one ";
    print(uni_one);

    cout << "uni two ";
    print(uni_two);

    //Avoids ambiguity
    //Test test();    //object creation or function declaration
    Test test{};  //object creation

    //typedef vector<int> IntVec;
    using IntVec = vector<int>;

    vector<IntVec> vec_of_vec;
}