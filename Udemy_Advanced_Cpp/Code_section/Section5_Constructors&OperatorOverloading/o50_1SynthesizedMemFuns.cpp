#include<iostream>
#include <string>
using namespace std;

class Test { 
    int i;
    string str;
public:
    Test(int i, const string& str) : i(i), str(str) {}
    void print() { 
        cout << "i = " << i << " str = " << str << endl;
    }
};

int main()
{
    Test test(5, "Hello");
    cout << "test after default constructor: ";
    test.print();
    Test test2(7, "Goodbye");
    cout << "test after default constructor: ";
    test2.print();
    Test test3 = test;
    cout << "test3 after copy constructor: ";
    test3.print();
    test = test2;
    cout << "test after assignment operator: ";
    test.print();
}