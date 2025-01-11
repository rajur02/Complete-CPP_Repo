#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class gen_n {
    const int n;
    int& idx;
public:
    gen_n(const int n, int& idx) : n(n), idx(idx) {}
    bool operator() (const string& str) {
        ++idx;
        return str.size()>n;
    } 
};

int main()
{
    vector<string> words{"a", "collection", "of", "words", "varying", "lengths"};

    int max{3}, idx{-1};  //idx is copied by value to the functor
    //auto res = find_if(cbegin(words), cend(words), [max, &idx] (const string& str) mutable { ++idx; return str.size()>max;});  //n & idx are passed as const o to make it modifiable we need to mention mutable
    auto res = find_if(cbegin(words), cend(words), gen_n(max, idx));

    if(res!=cend(words)) {
        cout << R"(The firest word which is more than )" << max << R"( letters long is ")";
        cout << *res << R"(")" << endl;
        cout << "The index is: " << idx << endl;  //it will not changes as it will be copied by value to the functor
    }
}