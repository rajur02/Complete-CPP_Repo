#include <iostream>
using namespace std;

int main()
{
    string str{"Hello World"};
    cout << "String to search: " << str << endl;

    //string find
    size_t pos = str.find('o');
    if(pos != string::npos) {
        cout << R"(First occurence of 'o' is at index: )" << pos << endl;
        //str[pos] = 'p';
    }
    else {
        cout << R"(Could not find 'o' in the string)" << endl;
    }

    pos = str.find("or");
    if(pos != string::npos) {
        cout << R"(First occurence of 'or' is at index: )" << pos << endl;
    }
    else {
        cout << R"(Could not find 'or' in the string)" << endl;
    }

    pos = str.find("O");
    if(pos != string::npos) {
        cout << R"(First occurence of 'or' is at index: )" << pos << endl;
    }
    else {
        cout << R"(Could not find 'or' in the string)" << endl;
    }

    //string reverse find
    pos = str.rfind('o');
    if(pos != string::npos) {
        cout << R"(First occurence of 'o' is at index: )" << pos << endl;
        //str[pos] = 'p';
    }
    else {
        cout << R"(Could not find 'o' in the string)" << endl;
    }

    cout << "Final contents of str: " << str << endl;

    string vowels{"aeiou"};
    cout << "First vowel is at index: " << str.find_first_of(vowels) << endl;
    cout << "Last vowel is at index: " << str.find_last_of(vowels) << endl;
    cout << "First non-vowel is at index: " << str.find_first_not_of(vowels) << endl;
    cout << "Last non-vowel is at index: " << str.find_last_not_of(vowels) << endl;
}