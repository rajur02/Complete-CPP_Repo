#include <iostream>
using namespace std;

class Complex {
    double real{0.0};
    double imag{0.0};

public:
    Complex(double r, double i) : real(r), imag(i) {}
    Complex(double r) : real(r) {}

    Complex& operator+=(const Complex& rhs) {
        real += rhs.real;
        imag += rhs.imag;
        return *this;
    }

    void print() { cout << "( " << real << ", " << imag << " )" << endl; }
};

Complex operator+(const Complex& lhs, const Complex &rhs) {
    Complex temp = lhs;
    temp+=rhs;
    return temp;
}

int main()
{
    Complex c1(1,2);
    Complex c2(3,4);
    cout << "c1: "; c1.print();
    cout << "c2: "; c2.print();

    Complex c3 = c1+c2;
    cout << "c3: "; c3.print();

    c1+=c2;
    cout << "c1: "; c1.print();

    Complex c4 = 1 + c2;
    cout << "c4: "; c4.print();

}