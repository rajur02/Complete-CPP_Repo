#include <iostream>
using namespace std;

class String { 
    string s;
public: 
    String(const char* str) : s(str) {}
    String(const string& s) : s(s) {}

    // String operator+(const String& arg) {
    //     return s + arg.s;
    // }

    friend String operator+(const String& arg1, const String& arg2);

    void print() {cout << s << endl; }
};

String operator+(const String& arg1, const String& arg2) {
    return arg1.s + arg2.s;
}

int main()
{
    String w{"world"}, bang{"!"};
    String wbang = w + bang;
    cout << "wbang: "; 
    wbang.print();

    String hi = "hello " + w; //This will work when we define operator overloading as non-member function/friend function
    cout << "hi: ";
    hi.print(); 
}