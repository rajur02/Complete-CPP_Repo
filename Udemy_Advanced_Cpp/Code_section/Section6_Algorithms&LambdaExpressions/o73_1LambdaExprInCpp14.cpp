#include <iostream>
using namespace std;

int main()
{
    string str1{"Hello "};
    string str2{"World"};

    //Generic Lambda implementation
    auto func = [](auto x, auto y) {return x+y;};
    cout << "Calling func(2,5) gives: " << func(2,5) << endl;
    cout << "Calling func(3.141,4.5) gives: " << func(3.141,4.5) << endl;
    cout << "Calling func(str1,str2) gives: " << func(str1,str2) << endl;

    //Local variable in Lambda
    auto add_two = [y=2](int x) { return x+y;};
    cout << "Calling add_two(2) gives: " << add_two(2) << endl;
    cout << "Calling add_two(5) gives: " << add_two(5) << endl;

    int z=1;
    auto add_z_plus1 = [y=z+1](int x) { return x+y;};
    cout << "Calling add_z_plus1(2) gives: " << add_z_plus1(2) << endl;
    cout << "Calling add_z_plus1(5) gives: " << add_z_plus1(5) << endl;

}