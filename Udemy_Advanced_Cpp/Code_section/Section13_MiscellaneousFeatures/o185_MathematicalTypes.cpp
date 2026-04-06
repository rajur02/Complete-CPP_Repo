#include <complex>
#include <iostream>

using namespace std;
using namespace std::literals;

int main() {

    //Input and output of complex numbers
	complex<double> p;
	complex<double> q{3.0, 4.0};
	cout << q << endl;                                                // Displays (3.0, 4.0)

	cout << "Enter a complex number, e.g. (1.5, 2.7)\n";
	cin >> p;
	cout << "Number entered is " << p << endl;
	cout << "Real part: " << p.real() << ", imaginary part: " << p.imag() << endl;

    //literal complex numbers and operations
    complex<double> p{ 1.0, 2.0 };
	cout << "p = " << p << endl;
	
	auto s = 2i;                               // Complex number, real part 0.0, imaginary part 2.0
	cout << "s = " << s << endl;
	
	auto z = 3.0 +  4i;                        // Complex number, real part 3.0, imaginary part 4.0
	cout << "z = " << z << endl;
	
	p += 4i;                                   // Increase p's imaginary part by 4.0
	cout << "p = " << p << endl;

    //operators on complex numbers
    complex<double> p{1.0, 2.0};
	cout << "p = " << p << endl;

	complex<double> q{3.0, 4.0};
	cout << "q = " << q << endl;

	cout << "r = p + q" << endl;
	complex<double> r = p + q;
	cout << "r = " << r << endl;

	cout << boolalpha << "p == q is " << (p == q) << endl;

	// ++p;
	p += 1;
	cout << "Incrementing p gives " << p << endl;

    //non-member functions
    complex<double> p{ 3.0, 4.0 };
	cout << "p = " << p << endl;
	
	cout << "p's magnitude is " << abs(p) << endl;
	cout << "p's phase angle is " << arg(p) << endl;
	cout << "p's conjugate is " << conj(p) << endl;
	cout << "p's square is " << pow(p, 2.0) << endl;
	cout << "p's sine is " << sin(p) << endl;
}