#include <iostream>
using namespace std;

int main()
{
    string names[2][4] {
        {"Fred", "Wilma", "Pebbles", "Dino"},
        {"Barney", "Betty", "Bamm-Bamm", "Hoppy"}
    };

    cout << "names[1][2] = " << names[1][2] << endl;

    cout << "\nThe Elements of names are:\n";
    for(int row=0; row<2; ++row) {
        for(int col=0; col<4; ++col) {
            cout << names[row][col] << ", ";
        }
        cout << endl;
    }

    //2D array flattened to 1D Array  
    string names1[] {
        "Fred", "Wilma", "Pebbles", "Dino","Barney", "Betty", "Bamm-Bamm", "Hoppy"
    };

    cout << "\nnames1[1][2] = " << names1[1*4+2] << endl;

    cout << "\nThe Elements of names1 are:\n";
    for(int row=0; row<2; ++row) {
        for(int col=0; col<4; ++col) {
            cout << names1[row*4 + col] << ", ";
        }
        cout << endl;
    }
}