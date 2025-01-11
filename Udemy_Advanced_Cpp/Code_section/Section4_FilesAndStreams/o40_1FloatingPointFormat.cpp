#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi{3.141'592'653'5};
    cout << pi << endl;

    double c{299'792'458};
    cout << c << endl;

    //scientific manipulators - scientific, uppercase
    cout << scientific << pi << endl;
    cout << scientific << uppercase << pi << endl;

    //fixed 
    cout << fixed << c << endl;
    long double e{1.602e-19};
    cout << fixed << e << endl;

    //setprecision
    int precision{3}, default_precision{6};
    cout << "Pi to " << precision << "significant figures is: ";
    cout << setprecision(precision) << pi << endl;
    cout << "Pi to " << default_precision << "significant figures is: ";
    cout << setprecision(default_precision) << pi << endl;
}