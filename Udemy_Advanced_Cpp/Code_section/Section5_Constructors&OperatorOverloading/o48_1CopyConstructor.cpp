#include <iostream>
#include <string>
using namespace std;

class String {
    string s;
public:
    //constructor
    String(const string& s) : s(s) {}

    //copy constructor
    String(const String& arg) : s(arg.s) {}

    void print() { cout << s << endl;}
};

int main()
{
    String w{"world"}; //call constructor
    String bang{w};    //call copy constructor
    String bang1 = bang; //call copy constructor

    cout << "w = ";w.print();
    cout << "bang = "; bang.print(); 
    cout << "bang1 = "; bang1.print();
}