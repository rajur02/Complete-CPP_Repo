#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class ge_5 {     //ge_5 - greater than or equal to 5
public:
    bool operator()(const string& s) {
        return(s.size() > 5);
    }
};

int main()
{
    vector<string> names {"Dilbert", "PHB", "Dogbert", "Asok", "Ted", "Alice", "Wally"};

    ge_5 long_enough;
    for(auto name : names) {
        if(long_enough(name)) {
            cout << "loop: the first name with > 5 characters: " << name << endl;
            break;
        }
    }

    auto res = find_if(cbegin(names), cend(names), ge_5());

    if(res != cend(names)) {
        cout << "algorithm: the first name with > 5 characters: " << *res << endl;
    }

    res = find_if_not(cbegin(names), cend(names), ge_5());

    if(res != cend(names)) {
        cout << "algorithm: the first name with <= 5 characters: " << *res << endl;
    }
}