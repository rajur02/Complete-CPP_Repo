#include <iostream>
using namespace std;

int main()
{
    //string append()
    string hello{"Hello"};

    hello.append(" world");
    cout << "hello after appending world: " << hello << endl;
    hello.append("wow!!!!", 3, 2);
    cout << "hello after appending !!: " << hello << endl;
    cout << endl;

    //string insert()
    string str1{"for"};
    str1.insert(2,"lde");
    cout << "str1 = " << str1 << endl;

    string str2{"care"};
    string str3{"omp"};
    str2.insert(1, str3);
    cout << "str2 = " << str2 << endl;

    string str4{"xx"};
    string str5{"trombone"};
    str4.insert(1, str5, 4, 2);
    cout << "str4 = " << str4 << endl;

    string str6{"cash"};
    str6.insert(1, 3, 'r');
    cout << "str6 = " << str6 << endl;

    string hello1("Hello");
    auto opos = hello1.find('o');

    if(opos != string::npos) {
        hello1.insert(opos, 2, 'o');
    }
    cout << "hello1 = " << hello1 << endl;

    string str7{"word"};
    auto last = end(str7)-1;
    str7.insert(last,'l');
    cout << "str7 = " << str7 << endl;

    string str8{"ski"};
    auto last1 =  end(str8);
    str8.insert(last1, 2,'l');
    cout << "str8 = " << str8 << endl;

    cout << endl;

    //Iterator invalidation
    string str9{"orld"};
    auto first = begin(str9);
    cout << "str9 = " << str9 << endl;

    str9.insert(end(str9), 16, 'd');
    first = begin(str9);
    str9.insert(first, 'w');
    cout << "str9 after = " << str9 << endl;
}