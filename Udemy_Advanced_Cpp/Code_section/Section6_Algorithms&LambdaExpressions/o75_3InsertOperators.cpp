#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    cout << "Enter some words: " << endl;
    istream_iterator<string> iis(cin);
    istream_iterator<string> eof;

    vector<string> vec;
    auto it = back_inserter(vec);

    while(iis != eof) {
        it = *iis;
        ++iis;
    }

    cout << "You entered: " << vec.size() << " words: ";
    for(auto v : vec) {
        cout << v << " ";
    }
}