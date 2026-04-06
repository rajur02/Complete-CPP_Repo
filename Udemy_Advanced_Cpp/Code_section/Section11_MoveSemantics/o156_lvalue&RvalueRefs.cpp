#include <iostream>
#include <string>

using namespace std;

void func(int&& x) {         // func's argument is an "rvalue reference"
	cout << "Called with argument: " << x << endl;
}

void test(const string& s) {
	cout << "Lvalue reference version\n";
}

void test(string&& s) {
	cout << "Rvalue reference version\n";
}

int main() {
	int y{2};

	func(2);                            // 2 is an rvalue. OK
	//func(y);                            // Error: y is an lvalue



    string l{string{"Perm"}};
	string& lr{l};

	cout << "Temporary object: ";
	test(string{"Temp"});

	cout << "Lvalue variable: ";
	test(l);

	cout << "Lvalue reference: ";
	test(lr);
	
	cout << "std::move(): ";
	test(std::move(l));
	cout << "\n";
	/*
	string&& r{string{"Temp"}};

	cout << "Rvalue variable: ";
	test(r);
	cout << "std::move(): ";
	test(std::move(r));
	*/
}
