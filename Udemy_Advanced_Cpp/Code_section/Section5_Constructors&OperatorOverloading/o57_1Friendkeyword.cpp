#include<iostream>
using namespace std;

class Test {
    int i{10};
    string s{"Hello"};
public:
    friend void print(const Test&); //friend function
    friend class Example; //friend class
};

//friend function
void print(const Test& test) {
    cout << "i = " << test.i << ", s = " << test.s << endl;
}

//friend class
class Example {
public:
    void print(const Test& test) {
    cout << "i = " << test.i << ", s = " << test.s << endl;
}
};

int main() 
{
    Test test;
    print(test); //calling friend function
    Example ex;
    ex.print(test); //calling friend class
}