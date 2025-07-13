#include <iostream>
#include <cctype>
using namespace std;

std::string exclaim(std::string& text)
{
    for(auto& c : text)
        if(ispunct(c))
            c = '!';
    return text;
}

int main()
{
    string str{"To be, or not to be, that is the question:"};
    cout << "Before calling exclaim: " << str << endl;
    exclaim(str);
    cout << "After calling exclaim: " << str << endl;
}