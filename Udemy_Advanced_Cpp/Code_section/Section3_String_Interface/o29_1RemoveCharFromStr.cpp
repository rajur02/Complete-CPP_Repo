#include <iostream>
using namespace std;

int main()
{
    //string erase()
    string hello{"hello"};
    hello.erase(3,1);
    cout << "hello = " << hello << endl;

    auto opos = hello.find('e');
    if(opos != string::npos)
        hello.erase(opos, 2);
    cout << "hello = " << hello << endl;
    cout << endl;

    //string erase() and iterators
    string hello1{"hello"};
    auto first = begin(hello1);
    hello1.erase(first);
    cout << "hello1 = " << hello1 << endl;

    hello1.erase(begin(hello1)+1, end(hello1)-1);
    cout << "hello1 = " << hello1 << endl;

    //string replace()
    string str{"Say Hello"};
    auto gdx = str.find('H');
    if(gdx != string::npos)
        str.replace(gdx, 5, "Goodbye");
    cout << "str = " << str << endl;

    //string replace() with iterators
    string str1{"Say Goodbye"};
    str1.replace(begin(str1), begin(str1)+3, "wave");
    cout << "str1 = " << str1 << endl;

    //strig assign()
    string str3 = {"Hello"};
    str3.assign("Goodbye");
    cout << "str3 = "<< str3 << endl;
}