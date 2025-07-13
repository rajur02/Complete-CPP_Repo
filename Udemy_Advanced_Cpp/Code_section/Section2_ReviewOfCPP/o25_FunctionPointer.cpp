#include <iostream>
using namespace std;

void func(int x, int y) {
    cout << x << " + " << y << " is " << x+y << endl;
}

using pfunc = void (*)(int, int);

//typedef void *(const string&, const string&) pfunc;   //older C++

void some_func(int x, int y, pfunc func_ptr) {
    (*func_ptr)(x,y);
}

pfunc other_func() {
    return &func;
}

int main()
{
    //Basic function pointer
    //auto func_ptr = &func;
    //(*func_ptr)(1,2);
    //func_ptr(1,2);  //The * is optional

    auto func_ptr = other_func();
    some_func(1,2,func_ptr);
}