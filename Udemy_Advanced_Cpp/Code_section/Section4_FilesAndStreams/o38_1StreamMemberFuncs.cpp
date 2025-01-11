#include <iostream>
#include <limits>
using namespace std;

int main()
{
    /* int x{0};
    cout << "Please enter a number: ";
    cin >> x;

    if(cin.good())
        cout << "You entered the number: " << x << endl;
    else if(cin.fail())
        cout << "Please try again and enter a number" << endl;
    else if(cin.bad())
        cout << "Something has gone seriously wrong" << endl; */
    
    int x{0};
    cin >> x;
    bool success{false};
    while(!success) {
        if(cin.good()) {
            cout << "You entered the number: " << x << endl;
            success=true;
        }
        else if(cin.fail()) {
            cout << "Please try again and enter a number" << endl;
            cin.clear();
            //cin.ignore(20,'\n');
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> x;
        }
    }
}