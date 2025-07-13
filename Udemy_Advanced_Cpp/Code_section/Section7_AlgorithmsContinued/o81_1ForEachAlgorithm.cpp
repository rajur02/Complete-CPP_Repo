#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str{"A test string"};

    //for_each()
    cout << "With for_each: ";
    for_each(cbegin(str), cend(str), [](const char c) {cout << c << ", "; });
    cout << endl;

    cout << "With range for loop: ";
    for(auto s : str) {
        cout << s << ", ";
    }
    cout << endl;

    for_each(begin(str), end(str), [](char& c) {return c=toupper(c);});
    cout << "str: " << str << endl;

    string str2{"A test string"};
    for(auto& c : str2) {
        c = toupper(c);
    }
    cout << "str2: " << str2 << endl;
}