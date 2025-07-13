#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 2;
    bool is_negative = x < 0;

    //Printing booleans
    cout << "The value of is_negative is: " << is_negative << endl;
    cout << "is_negative is " << boolalpha << is_negative << endl;
    cout << "x==2 is " << (x==2) << endl;
    cout << R"(The numerical value of "false" is : )" << noboolalpha << is_negative << endl;

    //Stream Manipulators setw(), left and setfill()
    cout << setfill('#');
    cout << left << setw(15) << "Penguins" << 5 << endl;
    cout << setw(15) << "Polar bears" << 2 << endl;
    cout << setfill(' ');
    cout << right;
    cout << setw(15) << "Cats " << 15 << endl;
}