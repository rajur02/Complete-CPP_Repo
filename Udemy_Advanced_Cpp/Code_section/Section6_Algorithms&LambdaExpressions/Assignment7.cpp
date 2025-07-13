/* Consider the following code (do not compile it yet!)

int y = 1;
[y = y+1](int x) { return x + y; };
cout << y << endl;
Questions for this assignment
Explain what the code does.

What will be the result of calling the lambda expression with argument 5?

What will be displayed as the final value of y?

Write a program to check your answers. */

#include <iostream>
using namespace std;

int main()
{
    int y = 1;
    [y = y+1](int x) { return x + y; };
    cout << y << endl;
}