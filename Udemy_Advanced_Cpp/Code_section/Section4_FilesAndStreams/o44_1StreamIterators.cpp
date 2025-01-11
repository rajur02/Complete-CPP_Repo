#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main()
{
    //ostream_iterator
    /* ostream_iterator<int> oi(cout, "\n");
    for(int i=0; i<10; i++) {
        *oi = i;
        ++oi;
    }

    //istream_iterator
    istream_iterator<int> ii(cin);
    int x = *ii;
    cout << "You entered " << x << endl; */

    //istream_iterator loop
    istream_iterator<string> iis(cin);
    istream_iterator<string> eof;

    vector<string> vs;

    while(iis != eof) {
        //vs.push_back(*iis);
        //++iis;
        vs.push_back(*iis++);
    }

    for(auto v : vs) {
        cout << v << endl;
    }
}