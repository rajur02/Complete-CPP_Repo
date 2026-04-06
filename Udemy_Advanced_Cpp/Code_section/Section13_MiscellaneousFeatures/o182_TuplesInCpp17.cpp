// Requires C++17 compiler
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<double, int, string> func() {
	//tuple<int, double, string> tup{1, 2.0, "three"s};    // C++11/14
	tuple tup{1, 2.0, "three"s};                           // C++17 with CTAD

	return tup;                                            // Return the tuple from the function
}

void func(int i, double d, string s) {
	cout << "i = " << i << ", d = " << d << ", s = " << s << endl;
}

struct Test {
	int i;
	double d;
	string s;
	Test(int i, double d, string s) : i(i), d(d), s(s) {}
	void print() {
		cout << "i = " << i << ", d = " << d << ", s = " << s << endl;
	}
};


int main() {
	// Use C++17 structured binding
	auto [d, i, str] = func();                             // Unpack the tuple in the caller
	
	cout << "The elements of the returned tuple are: " << d << ", " << i << R"(, ")" << str << R"(")" << endl;

    //apply()
    apply(func, tuple(1, 2.0, "three"s));        // Calls func(1, 2.0, "three"s);

    //make_from_tuple()
    auto test = make_from_tuple<Test>(tuple(1, 2.0, "three"s));        // Calls Test(1, 2.0, "three"s);
	test.print();
}