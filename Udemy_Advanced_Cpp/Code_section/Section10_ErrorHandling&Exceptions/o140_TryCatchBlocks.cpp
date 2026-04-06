#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec;
	try {
		try {
			cout << vec.at(2) << endl;                         // Throws an exception
		}
		catch (const std::runtime_error& e) {
			cout << "Runtime error catch block\n";
			cout << "Exception caught: " << e.what() << endl;  // Print out a description of the exception
		}
	}
    catch (const out_of_range& e) {           // Only handles exceptions of type std::out_of_range
		cout << "std::out_of_range\n";
	}
	catch (const std::exception& e) {                       // Will handle all subclasses of std::exception
		cout << "std::exception catch block\n";
		cout << "Exception caught: " << e.what() << endl;  // Print out a description of the exception
	}
}