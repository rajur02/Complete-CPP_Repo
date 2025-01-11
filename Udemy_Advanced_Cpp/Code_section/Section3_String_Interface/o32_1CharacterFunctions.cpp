#include <iostream>
using namespace std;

//Return true if input is 'Y' or 'y'
bool yes_or_no(const string& input)
{
    char c = input[0];
    if(toupper(c)=='Y')
        return true;
    return false;
}

int main()
{
    /* string hello("Hello WOrld!");
    for(auto c : hello) {
        if(isupper(c))
            cout << c << " is upper case letter!" << endl;
        if(islower(c))
            cout << c << " is lower case letter!" << endl;
        if(ispunct(c))
            cout << c << " is punctuation character" << endl;
        if(isspace(c))
            cout << "\'" << c << "\'" << " is whitespace character" << endl;
    } */

    string input;
    cout << "Do you want to enter a string which starts with 'Y' or 'y'" << endl;
    cin>>input;

    if(yes_or_no(input))
        cout << "Evidently you do!" << endl;
    else
        cout << R"(I will take that as "No")" << endl;
}