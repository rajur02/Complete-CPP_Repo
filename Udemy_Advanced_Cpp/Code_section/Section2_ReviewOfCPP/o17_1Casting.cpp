#include <iostream>
using namespace std;

void print(char *str)
{
    cout << str << endl;
}

int main()
{
    int c = 'A';
    cout << c << endl;
    //cout << (char)c << endl;
    cout << static_cast<char>(c) << endl;

    const char *msg = "Hello World!";
    print(const_cast<char*>(msg)); 
}