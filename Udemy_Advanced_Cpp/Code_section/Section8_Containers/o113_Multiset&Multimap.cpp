/*To run the program for C++17 on windows
c++ -std=c++17 o112_1MapsInCpp17.cpp
.\a.exe
*/

#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    //multiset
    multiset<int> s;
    s.insert(6);
    s.insert(7);
    s.insert(4);
    s.insert(6);
    s.insert(6);

    for(auto el : s) {
        cout << el << ", ";   //4, 6, 6, 6, 7, 
    }
    cout << endl;

    //multimap
    multimap<string, int> scores;
    scores.insert({"Graham", 78});
    scores.insert({"Grace", 66});
    scores.insert({"Graham", 66});
    scores.insert({"Graham", 72});
    scores.insert({"Hareesh", 77});

    //scores.erase("Graham");

    for(auto s : scores) {
        cout << s.first << " has score of " << s.second << endl;
    }
    cout << endl;
    /*Grace has score of 66
    Graham has score of 78
    Graham has score of 66
    Graham has score of 72
    Hareesh has score of 77*/

    //find the elements with the same key
    auto res = scores.find("Graham");

    if(res != end(scores)) {
        auto n_matches = scores.count("Graham");

        for(int i=0; i<n_matches; ++i) {
            cout << "Key = " << res->first << ", value " << res->second << endl;
            ++res; 
        }
    }
    cout << endl;
    /*Key = Graham, value 78
    Key = Graham, value 66
    Key = Graham, value 72*/

    //To find the elements with particular value
    auto res1 = scores.find("Graham");
     if(res1 != end(scores)) {
        auto n_matches = scores.count("Graham");

        for(int i=0; i<n_matches; ++i) {
            if(res1->second == 66) {
                cout << "Key = " << res1->first << ", value " << res1->second << endl;  //Key = Graham, value 66
                break;
            }
            ++res1; 
        }
    }

}