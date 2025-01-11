#include <iostream>
#include <string>
using namespace std;

class Test {
    int i{42};
    string str;
public:
    //explicit constructor
    explicit Test(int i) : i(i) {}
    //operator int() const { return i;}  //implicit conversion
    explicit operator int() const { return i;}  //explicit conversion
    explicit operator bool() const { return i;}
};

int main() 
{
    //Test test;
    //Implicit conversion
    //cout << test << endl;   //returns operator int(42)
    //Explicit conversion
    //cout << static_cast<int>(test) << endl;

    //if(test)
     //   cout << "This is allowed" << endl;

    //Copy constructor call when we make the constructor explicit
    Test test = Test{4};
}
