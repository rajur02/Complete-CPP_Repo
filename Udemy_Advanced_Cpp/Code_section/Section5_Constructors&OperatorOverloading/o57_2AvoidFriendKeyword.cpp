#include <iostream>
using namespace std;

class Test { 
    int i{20};
    string s{"Goodbye"};
public:
    void print() const { 
        cout << "i = " << i <<", s = "<< s << endl;
    }
};

void print(const Test& test) { 
    test.print();
}

int main() 
{
    Test test;
    print(test);
}
