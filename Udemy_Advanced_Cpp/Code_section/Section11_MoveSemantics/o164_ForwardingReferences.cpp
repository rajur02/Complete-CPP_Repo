#include <iostream>

using namespace std;

void func(int& x) {
	cout << "func called with argument int&" << endl;
}

class Test {};

template <class T>
void func(T&& x) {
	cout << "func called" << endl;
}

int main() {
	int i{42};
	//int& & ri = i;                       // Error

	using int_ref = int&;                  // or typedef int& int_ref;

	int_ref j{i};                          // j is a reference to int
	int_ref& rj{j};                        // rj is a reference to (reference to int)

	func(rj);

    Test t;
	Test& rt{t};

	// T is Test& and x is T&& => Test&
	func(t);                  // Compiler instantiates func(Test& x)

	// T is Test& and x is T&& => Test&
	func(rt);                 // Compiler instantiates func(Test& x)

	// T is Test and x is T&& => Test&&
	func(std::move(t));       // Compiler instantiates func(Test&& x)
}