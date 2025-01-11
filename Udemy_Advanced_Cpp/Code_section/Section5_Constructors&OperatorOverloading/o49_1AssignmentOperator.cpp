#include <iostream>
#include <string>
using namespace std;

class String {
    string s;
public:
    //constructor
    String() : s("") {}
    String(const string& s) : s(s) {}

    //copy constructor
    String(const String& arg) : s(arg.s) {}

    //Assignment operator
    String& operator=(const String arg) {
        s=arg.s;
        return *this;
    }

    void print() { cout << s << endl;}
};

int main()
{
    String w{"world"}; //call constructor
    String bang{"bang"};    //call copy constructor
    bang = w;           //call Assignment operator
    String bang2;
    bang2 = w;

    cout << "w = ";w.print();
    cout << "bang = "; bang.print(); 
    cout << "bang2 = "; bang2.print();
}