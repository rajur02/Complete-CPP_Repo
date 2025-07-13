#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string word1{"first word"}, word2{"word2"};

    //min(), max()
    auto max_args = max(word1, word2);
    auto min_args = min(word1, word2);

    cout << "max with arguments returned: " << max_args << endl;  //max with arguments returned: word2
    cout << "min with arguments returned: " << min_args << endl;  //min with arguments returned: first word

    //min() and max() with predicate
    auto max_pred = max(word1, word2, [](const string& lhs, const string& rhs){return lhs.size()<rhs.size();});
    auto min_pred = min(word1, word2, [](const string& lhs, const string& rhs){return lhs.size()<rhs.size();});

    cout << "max with predicate returned: " << max_pred << endl;  //max with predicate returned: first word
    cout << "min with predicate returned: " << min_pred << endl;  //min with predicate returned: word2

    //min() and max() with initializer list
    auto max_init = max({"collection", "of", "words"});
    auto min_init = min({"collection", "of", "words"});

    cout << "max with initializer list returned: " << max_init << endl;  //max with initializer list returned: words
    cout << "min with initializer list returned: " << min_init << endl;  //min with initializer list returned: collection

    //minmax()
    auto mm = minmax({"collection", "of", "words"});
    cout << "minmax returned an std::pair {\"" << mm.first << "\", \"" << mm.second << "\"}" << endl;  //minmax returned an std::pair {"collection", "words"}

    //min_element(), max_element()
    vector<string> words{"a", "collection", "of", "words", "with", "varying", "lengths"};

    auto max_words = max_element(cbegin(words), cend(words));
    cout << "max elements returned \"" << *max_words << "\"" << endl;  //max elements returned "words"

    auto min_words = min_element(cbegin(words), cend(words), [](const string& lhs, const string& rhs){return lhs.size()<rhs.size();});
    cout << "min elements returned \"" << *min_words << "\"" << endl;  //min elements returned "a"
 
    //minmax_element()
    auto mm_el = minmax_element(cbegin(words), cend(words));
    auto m1 = mm_el.first;
    auto m2 = mm_el.second;
    cout << "minmax_element returned an std::pair{\"" << *m1 << "\", \"" << *m2 << "\"}" << endl;  //minmax_element returned an std::pair{"a", "words"}
}