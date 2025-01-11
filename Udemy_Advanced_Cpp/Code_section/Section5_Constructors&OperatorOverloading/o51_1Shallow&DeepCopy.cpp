#include <iostream>
#include <string>
using namespace std;

class String {
    char *data;
    int size;
public:
    //Shallow copy
    String(const string& s) : size(s.size()) {
        cout << "Constructor called" << endl;
        data = new char[size];

        for(int i=0; i<size; i++) {
            data[i] = s[i];
        }
    }

    //Deep copy
    String(const String& arg) : size(arg.size) {
        cout << "Copy constructor called" << endl;
        data = new char[size];

        for(int i=0; i<size; i++) {
            data[i] = arg.data[i];
        }
    }

    String& operator=(const String& arg) {
        cout << "Calling Assignment operator" << endl;

        if(&arg != this) {
            delete [] data;
            data = new char[arg.size];

            size = arg.size;

            for(int i=0; i<size; i++) {
                data[i] = arg.data[i];
            }
        }
        return *this;
    }

    int length() {
        return size;
    }

    ~String() {
        cout << "Destructor called" << endl;
        delete [] data;
    }
};

int main() 
{
    String str("1");
    String str2("two");
    String str3(str2);  /* We require deep copy for this as both the objects pointing to same data memory location and while 
    releasing str3 will release the data but when str2 tries to release the same memory data it will crash */
    cout << "Str2 size: " << str2.length() << endl;
    cout << "str3 size: " << str3.length() << endl;

    str2 = str3;
    cout << "Str2 size: " << str2.length() << endl;

    cout << "str size: " << str.length() << endl;

}