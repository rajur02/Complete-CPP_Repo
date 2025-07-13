#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hello{"hello, "};
    string pi{to_string(3.14159)};
    hello+=pi;
    cout << "hello = " << hello << endl; 
    cout << endl;

    //string to integer stoi()
    cout << stoi("42"s) << endl;
    string str("  314 159");
    size_t n_processed;

    auto i = stoi(str, &n_processed);
    if(n_processed < str.size()) {
        cout << "Non-numeric character at index: " << n_processed << endl;
    }
    cout << "result of conversion: " << i << endl;

    //stoi("abcdef"s);

    auto x = stoi("2a", nullptr, 16);
    cout << "Result of conversion: " << x << endl;

    //string to floating point(stod())
    string pi1{"3.14159"};
    cout << "pi = " << pi1 << endl;

    cout << "stoi: " << endl;
    cout << stoi(pi1, &n_processed) << endl;
    cout << n_processed << " characters processed" << endl;
    cout << endl;
    cout << "stod: " << endl;
    cout << stod(pi1, &n_processed) << endl;
    cout << n_processed << " characters processed" << endl;
}