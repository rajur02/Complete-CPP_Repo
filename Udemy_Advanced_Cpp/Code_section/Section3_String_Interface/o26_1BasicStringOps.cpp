#include <iostream>
using namespace std;

int main()
{
    string str{"Hello World"};
    str[1]='a';

    string s1  = str.substr(6);
    string s2 = str.substr(6,2);

    cout << str << endl;
    cout << s1 << endl;
    cout << s2 << endl;

    cout << endl;

    //Default Constructor;
    string empty;
    cout << "empty has " << empty.size() << " characters: " << empty << endl;

    //C-style string
    string hi{"Hello"};
    cout << "hi has " << hi.size() << " characters: " << hi << endl;

    //Repeated value
    string triple_x(3,'x');
    cout << "triple_x has " << triple_x.size() << " characters: " << triple_x << endl;

    //Initializer list
    string howdy{'H','e','l','l','o'};
    cout << " howdy has " << howdy.size() << " characters: " << howdy << endl;

    //substring
    string hello1(hi, 1);
    cout << "hello1 has " << hello1.size() << " characters: " << hello1 << endl;

    string hello2(hi,1,3);
    cout << "hello2 has " << hello2.size() << " characters: " << hello2 << endl;
}