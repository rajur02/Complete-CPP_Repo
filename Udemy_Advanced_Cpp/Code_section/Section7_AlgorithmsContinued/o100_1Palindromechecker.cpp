#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string normalize(const string& s) {
    string retval{""};

    copy_if(cbegin(s), cend(s), back_inserter(retval), [](char c) {return isalpha(c);});

    transform(begin(retval), end(retval), begin(retval), [](char c) {return tolower(c);});

    return retval;
}

int main()
{
    string s{""};
    cout << "Please enter your palindrom: ";
    getline(cin, s);

    string pal{normalize(s)};

    auto p = mismatch(cbegin(pal), cend(pal), crbegin(pal));

    if(p.first == cend(pal) && p.second == crend(pal)) {
        cout << "\"" << s << "\"" << " is palindrome" << endl;
    }
    else {
        cout << "\"" << s << "\"" << " is not palindrome" << endl;

        string outstr;
        copy(cbegin(pal), p.second.base(), back_inserter(outstr));
        cout << "'" << *(p.first) << "'" << " does not match " <<  "\'" << *(p.second) << "\'";
        cout << " at \"" << outstr << "\"" << endl;
    }
}