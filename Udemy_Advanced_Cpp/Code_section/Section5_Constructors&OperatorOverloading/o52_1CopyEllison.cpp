#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Default Constructor" << endl; }
    Test(const Test& other) { cout << "Copying" << endl; }

};

// Test func() {
//     cout << "In func()" << endl;
//     return Test();
// }

//Function returning local variable
// Test func() {
//     cout << "In func()" << endl;
//     Test test;
//     return test;
// }

//Passing trmporary object to the function 
void func(Test test) {
    cout << "In func()" << endl;
}


int main() 
{
    cout << "Calling func()" << endl;
    //Test test = func();
    func(Test());
    cout << "Returned from func()" << endl;
}