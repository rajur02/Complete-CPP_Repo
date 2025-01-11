#include <iostream>
using namespace std;

class evenp {
public: 
    bool operator() (int n) {
        return (n % 2 == 0);
    }
};

int main()
{
    evenp is_even;
    if(is_even(6))
        cout << "6 is even number" << endl;
}