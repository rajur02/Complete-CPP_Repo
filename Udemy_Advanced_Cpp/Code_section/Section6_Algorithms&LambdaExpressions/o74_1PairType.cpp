#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<string, string> wordpair {"hello", "there"};
    //auto wordpair {make_pair("hello", "there")};
    //pair wordpair{"hello", "there"};

    cout << "First element of Pair is: " << wordpair.first << endl;
    cout << "Second element of Pair is: " << wordpair.second << endl;
}