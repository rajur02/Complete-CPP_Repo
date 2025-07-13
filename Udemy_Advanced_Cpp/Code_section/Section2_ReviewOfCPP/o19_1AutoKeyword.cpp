#include <iostream>
using namespace std;

int main()
{
    auto i{42};
    auto str1 = "Hello";
    auto str2 = "Hello"s;
    
    cout << "i*2: " << i*2 << endl;
    auto it = str2.begin();
    cout << "First element of str2 : " << *it << endl;

    const int& x{6};
    auto y = x;
    //const auto& y= x;
    ++y;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
}