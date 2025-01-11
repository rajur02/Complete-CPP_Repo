#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class ge_n {     //ge_5 - greater than or equal to 5
    const int n;
public:
    ge_n(const int n) : n(n) {}
    bool operator()(const string& s) {
        return(s.size() > n);
    }
};

int main()
{
    vector<string> names {"Asok", "Ted", "Alice", "Dilbert", "PHB", "Dogbert", "Wally"};

    auto res = find_if(cbegin(names), cend(names), ge_n(3));

    if(res != cend(names)) {
        cout << "algorithm: the first name with > 5 characters: " << *res << endl;
    }
}