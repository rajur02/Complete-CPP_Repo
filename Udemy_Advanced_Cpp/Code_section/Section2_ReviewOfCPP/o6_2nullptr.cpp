#include <iostream>
using namespace std;

void func(int i)
{
    cout << "func(int) called" << endl;
}

void func(int *i)
{
    cout << "func(int*) called" << endl;
}

int main()
{
    //func(NULL);
    func(nullptr);
}