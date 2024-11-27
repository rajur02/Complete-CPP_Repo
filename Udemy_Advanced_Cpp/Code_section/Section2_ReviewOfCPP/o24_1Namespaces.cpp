#include <iostream>
using namespace std;

int x{23};

namespace abc {
    int x{47};
    void func() {
        cout << "x: " << x << endl;
        cout << "::x: " << ::x << endl;
    }
}

int main()
{
    abc::func();
    cout << "abc::x: " << abc::x << endl;
    cout << "x: " << x << endl;
}