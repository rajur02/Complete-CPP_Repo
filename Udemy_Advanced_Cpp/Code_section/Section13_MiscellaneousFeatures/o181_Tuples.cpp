#include <iostream>
#include <string>
#include <tuple>

using namespace std;

tuple<double, int, string> func() {
	return {1.0, 2, "Three"s};                        // Return the tuple from the function
}

int main() {

    //getting and setting tuple elements
	// We can create a tuple instance explicitly
	tuple<double, int, string> numbers(1.0, 2, "Three"s);

	// Or use make_tuple() to create a tuple instance
	//auto numbers{make_tuple(1.0, 2, "Three"s)};

	auto x = get<0>(numbers);                    // Store first element in x
	cout << "First element is " << x << endl;

	cout << "Setting second element to 3" << endl;
	get<1>(numbers) = 3;                         // Set second element to 3

	// C++14 allows us to use the type as the parameter, if unique
	auto i = get<int>(numbers);                  // Store int element in i
	cout << "Value of int element is " << i << endl;


    tuple<double, int, string> numbers(1.0, 2, "Three"s);
	
    //tie() can be used to unpack the tuple elements into separate variables
	double d;
	int i;
	string str;
	
	tie(d, i, str) = numbers;              // Store all elements in variables
	
	cout << "Tuple elements are: " << d << ", " << i << R"(, ")" << str << R"(")" << endl;


    //returning multiple values from a function
    double d;
	int i;
	string str;
	tie(d, i, str) = func();                             // Unpack the tuple in the caller
	
	cout << "Elements of returned tuple are: " << d << ", " << i << R"(, ")" << str << R"(")" << endl;
}