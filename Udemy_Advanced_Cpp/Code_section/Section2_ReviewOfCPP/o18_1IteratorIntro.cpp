#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Normal Method
    const char str[] = {'H','e','l','l','o'};
    const char *pEnd = str + 5;
    const char *p = str;
    while(p != pEnd)
    {
        cout << *p << ", ";
        ++p;
    }
    cout << endl;

    //String iterator
    string str1{"Hello"};
    // string::iterator it = str1.begin();
    //using while loop
    // while(it != str1.end())
    // {
    //     cout << *it << ", ";
    //     ++it;
    // }
    //using for loop
    for(string::iterator it = str1.begin(); it!=str1.end(); ++it) {
        cout << *it << ", ";
    }
    cout << endl;

    //vector iterator
    // vector<int> vec{3,4,5,2,1};
    // vector<int>::iterator it = vec.begin();
    // while(it != vec.end())
    // {
    //     cout << *it << ", ";
    //     ++it;
    // } 
}