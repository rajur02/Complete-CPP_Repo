#include <iostream>
using namespace std;

int main()
{
    cout << "char " << sizeof(char) << endl;
    cout << "int " << sizeof(int) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "long long " << sizeof(long long) << endl;
    cout << endl;

    cout << "int8_t " << sizeof(int8_t) << endl;
    cout << "int16_t " << sizeof(int16_t) << endl;
    cout << "int32_t " << sizeof(int32_t) << endl;
    cout << "int64_t " << sizeof(int64_t) << endl;
    cout << endl;

    cout << "uint8_t " << sizeof(uint8_t) << endl;
    cout << "uint16_t " << sizeof(uint16_t) << endl;
    cout << "uint32_t " << sizeof(uint32_t) << endl;
    cout << "uint64_t " << sizeof(uint64_t) << endl;
    cout << endl;

    int decimal=42;
    cout << "decimal is " << decimal << endl;

    int hexadecimal=0x2a;
    cout << "Hexadecimal is " << hexadecimal << endl;

    int octal=052;
    cout << "Octal is " << octal << endl;

    int binary=0b101010;
    cout << "Binary is " << binary << endl;
    cout << endl;

    const int one_million = 1'000'000;
    const int one_lakh = 1'00'000;
    double pi = 3.142'539;

    cout << "One million is " << one_million << endl;
    cout << "One lakh is " << one_lakh << endl;
    cout << "PI is " << pi << endl; 
}
