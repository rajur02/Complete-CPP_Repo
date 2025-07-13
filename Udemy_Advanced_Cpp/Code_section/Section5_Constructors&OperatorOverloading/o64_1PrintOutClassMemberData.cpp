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

int main()
{
    Test test;
    test.print(cout);

    ofstream ofile("test.txt");
    if(!ofile.is_open()) {
        cout << "Could not open test.txt file" << endl;
        return -1;
    }

    test.print(ofile);
}