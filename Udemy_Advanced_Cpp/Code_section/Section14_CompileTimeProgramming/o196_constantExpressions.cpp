#include <iostream>

using namespace std;

int main() {
	const int i{42}, j{99};
	
	// NB Compile with -pedantic with g++
	int arr[i+j];                   // Array dimension must be a constant expression

    constexpr int i{42}, j{99};
	
	int arr[i+j];                   // Array dimension must be a constant expression
}