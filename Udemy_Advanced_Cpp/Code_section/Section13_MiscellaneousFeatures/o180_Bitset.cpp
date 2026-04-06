#include <iostream>
#include <bitset>

using namespace std;

int main() {
    //data access and initialization
	bitset<8> b1{"10101110"};              // Initialize from string literal - bitset with value 174
	bitset<8> b2{0xae};                    // Initialize from integer (decimal or hexadecimal)
	bitset<8> b3{0b1010'1110};             // Initialize from binary constant (C++14)

	cout << "b1 is " << b1 << endl;                          // Displays 10101110
	cout << "b2 in decimal is " << b2.to_ulong() << endl;    // Displays 174
	cout << "b2 as a string is " << b2.to_string() << endl;  // Displays 10101110
	cout << "b3 is " << b3 << endl;                          // Displays 10101010

	cout << "b1 has " << b1.size() << " bits\n";         //Displays 8

	// Display all the bits in b1
	cout << "The bits of b1 are: ";
	for (std::size_t i = 0; i < b1.size(); ++i)
		std::cout << b1[i] << ",";
	cout << endl;

	// Bit access with bounds checking
	cout << "Trying access to bit 8 of b1 with bounds checking\n";
	try {
		std::cout << "b1 bit "<< 8 << " = " << b1.test(8) << endl;
	}
	catch (std::exception& e) {
		cout << "Caught exception: " << e.what() << endl;
	}

    //operations
    bitset<8> b1{"10101110"};                        // Bitset with value 174
	bitset<8> b2{0b010'1110};                        // Bitset with value 42

	cout << "b1 is  " << b1 << endl;                 // Displays 10101110
	cout << "~b1 is " << ~b1 << endl;                // Displays 01010001
	cout << "b2 is  " << b2 << endl;                 // Displays 00101110

	cout << "b1 & b2 is " <<(b1 & b2) << endl;       // Displays 00101110
	cout << "b1 | b2 is " << (b1 | b2) << endl;      // Displays 10101110
	cout << "b1 ^ b2 is " << (b1 ^ b2) << endl;      // Displays 10000000

	cout << "b1 << 4 is " << (b1 << 4) << endl;      // Displays 11100000
	cout << "b2 >> 2 is " << (b2 >> 2) << endl;      // Displays 00001011


    //member operations
    bitset<8> b1{"10101110"};              // Bitset with value 174

	cout << "b1 = " << b1 << endl;

	auto b2 = b1;
	cout << "Calling b2.set()" << endl;
	b2.set();                              // Set all bits to true
	cout << "b2 = " << b2 << endl;

	auto b3 = b1;
	cout << "Calling b3.set(0)" << endl;
	b3.set(0);                            // Set bit 0 to true
	cout << "b3 = " << b3 << endl;

	cout << "Calling b3.set(0, false)" << endl;
	b3.set(0, false);                     // Set bit 0 to false
	cout << "b3 = " << b3 << endl;

	auto b4 = b1;
	cout << "Calling b4.reset()" << endl;
	b4.reset();                           // Set all bits to false
	cout << "b4 = " << b4 << endl;

	auto b5 = b1;
	cout << "Calling b5.reset(7)" << endl;
	b5.reset(7);                          // Set bit 7 to false
	cout << "b5 = " << b5 << endl;

	auto b6 = b1;
	cout << "Calling b6.flip()" << endl;
	b6.flip();                            // Invert all bits
	cout << "b6 = " << b6 << endl;

	auto b7 = b1;
	cout << "Calling b7.flip(7)" << endl;
	b7.flip(7);                           // Invert bit 7
	cout << "b7 = " << b7 << endl;

    //checks and counts
    bitset<8> b1{"10101110"};              // Bitset with value 174

	cout << "b1 = " << b1 << endl;

	bitset<8> b2;
	b2.set();                              // Set all bits to true
	cout << "b2 = " << b2 << endl;

	bitset<8> b3;
	b3.reset();                            // Set all bits to false
	cout << "b3 = " << b3 << endl << endl;

	cout << boolalpha << "Are all bits set?" << endl;
	cout << "b1: " << b1.all() << endl;
	cout << "b2: " << b2.all() << endl;
	cout << "b3: " << b3.all() << endl << endl;

	cout << boolalpha << "Are any bits set?" << endl;
	cout << "b1: " << b1.any() << endl;
	cout << "b2: " << b2.any() << endl;
	cout << "b3: " << b3.any() << endl << endl;

	cout << boolalpha << "Are no bits set?" << endl;
	cout << "b1: " << b1.none() << endl;
	cout << "b2: " << b2.none() << endl;
	cout << "b3: " << b3.none() << endl << endl;

	cout << "Number of bits set" << endl;
	cout << "b1: " << b1.count() << endl;
	cout << "b2: " << b2.count() << endl;
	cout << "b3: " << b3.count() << endl << endl;
}