#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

class gen_n {
    const int n;
    int& idx;
public:
    gen_n(const int n, int& idx) : n(n), idx(idx) {}
    bool operator()(const string& str) const {
        ++idx; return str.size() > n;
    }
};

pair<string, int> find_index(const vector<string>& vec, int max) {
    int idx{-1};
    auto res = find_if(cbegin(vec), cend(vec), [max, &idx](const string& str) {++idx; return str.size()>max; });

    if(res != cend(vec)) {
        return {*res, idx};
    }
    else {
        return {"",idx};
    }
}

int main()
{
    vector<string> words{"a", "collection", "of", "words", "varying", "lengths"};
    int max{5};

    auto res = find_index(words, max);
    cout << R"(The firest word which is more than )" << max << R"( letters long is ")";
    cout << res.first << R"(")" << endl;  
    cout << "It's index is: " << res.second << endl; 
}