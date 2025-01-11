#include<iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    ostringstream ostr;
    string text;
    cout << "Enter a word: " << endl;
    cin >> text;
    ostr << setw(16) << text;
    cout << "Enter another word: " << endl;
    cin >> text;
    ostr << setw(12) << text;
    
    cout << ostr.str() << endl;
}