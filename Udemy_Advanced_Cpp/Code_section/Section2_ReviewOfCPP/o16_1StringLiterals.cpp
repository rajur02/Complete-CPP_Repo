#include <iostream>
using namespace std;
using namespace std::literals;

int main()
{
    const char *cca = "Hello, World!";
    cout << "cca: " << cca << endl;

    string str = "Hello, World!";
    cout << "str: " << str << endl;

    cout << "std::string literal: " << "Hello"s +", World!"s << endl;

    string str1 = "<a href=\"file\">C:\\\"Program Files\"\\</a>\\n";
    cout << "str1: " << str1 << endl;

    string raw_url = R"(<a href="file">C:\"Program Files"\</a>\n)";
    cout << "raw url: " << raw_url << endl;

    string delimeter_url = R"x(<a href="file">C:\"Program Files (x86)"\</a>\n)x";
    cout << "delimeter url: " << delimeter_url << endl;
}