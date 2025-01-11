#include <iostream>
#include <fstream>
using namespace std;

class Test {
    int i{42};
    string str{"Hello"};
public:
    void print(ostream& os) const {
        os << "i = " << i << ", str = " << str << endl;
    }
};

//overloaded operator << which prints out data members of the Test class
ostream& operator<<(ostream& os, Test test) {
    test.print(os);
    return os;
}

int main()
{
    Test test;
    cout << test << endl;  //we can directly use overloaded opeartor << here

    ofstream ofile("test1.txt");
    if(!ofile.is_open()) {
        cout << "Could not open test.txt file" << endl;
        return -1;
    }

    ofile << test << endl; ////we can directly use overloaded opeartor << here
}