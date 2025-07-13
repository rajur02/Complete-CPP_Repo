#include <iostream>
#include <cctype>
using namespace std;

bool equal_strings(const string& lhs, const string& rhs) {
    if(lhs.size() != rhs.size())
            return false;

    auto lit = cbegin(lhs);
    auto rit = cbegin(rhs);

    while(lit != end(lhs) && rit != end(rhs)) {
        if(toupper(*lit) != toupper(*rit))
        return false;
        ++lit;
        ++rit;
    } 
    return true;
}

int main()
{
    string a{"one"}, b{"two"}, c{"oNe"};
    cout << "Using library == operator" << endl;
    cout << a << " and " << b << " are " << (a==b ? " " : "not ") << "equal" << endl;
    cout << b << " and " << c << " are " << (b==c ? " " : "not ") << "equal" << endl;
    cout << a << " and " << c << " are " << (a==c ? " " : "not ") << "equal" << endl;

    cout << endl;

    cout << "Using equal string" << endl;
    cout << a << " and " << b << " are " << (equal_strings(a,b) ? " " : "not ") << "equal" << endl;
    cout << b << " and " << c << " are " << (equal_strings(b,c) ? " " : "not ") << "equal" << endl;
    cout << a << " and " << c << " are " << (equal_strings(a,c) ? "" : "not ") << "equal" << endl;
}
