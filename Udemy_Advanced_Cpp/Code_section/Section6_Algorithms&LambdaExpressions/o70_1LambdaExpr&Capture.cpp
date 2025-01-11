#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//compiler will call this class when the lambda expression is called
class gen_n {
    const int n;
public:
    gen_n (const int n) : n(n) {}

    bool operator() (const string& str) {
        return str.size()>n;
    }
};

int main()
{
    vector<string> words{"a", "of", "words", "collection", "varying", "lengths"};

    int n{3}, idx{-1};  //idx is copied by value to the functor
    //auto res = find_if(cbegin(words), cend(words), [n] (const string& str) {return str.size()>n;});  //using lambda expression will create function similar to gen_n
    //auto res = find_if(cbegin(words), cend(words), gen_n(n));  //without using lambda expression
    auto res = find_if(cbegin(words), cend(words), [n, idx] (const string& str) mutable { ++idx; return str.size()>n;});  //n & idx are passed as const o to make it modifiable we need to mention mutable

    if(res!=cend(words)) {
        cout << R"(The firest word which is more than )" << n << R"( letters long is ")";
        cout << *res << R"(")" << endl;
        cout << "The index is: " << idx << endl;  //it will not changes as it will be copied by value to the functor
    }
}