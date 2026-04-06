#include <memory>
#include <iostream>
//#include <array>
//#include <vector>

using namespace std;

// Data structure representing a point on the screen
struct Point {
    int x;
    int y;
};

void func(unique_ptr<Point> upp) {
    cout << upp->x << ", " << upp->y << endl;
}


unique_ptr<Point> point_ptr(int x, int y) { 
    Point p = {x, y};                            // Create Point object
	
	auto ptr {make_unique<Point>(p)};            // Create local unique_ptr object
    return ptr;                                  // The allocated memory is transferred
                                                 // from p to the returned object
												 // NB not return std::move(ptr);
}

unique_ptr<Point> point_ptr(int x, int y) { 
    Point p = {x, y};                                  // Create Point object
	
	return make_unique<Point>(p);                      // Create and return unique_ptr object
}

int main() {
	// In C++11, we have to provide the pointer by calling new() explicitly
	
	// Allocate a single int with value 42
	unique_ptr<int> p1 { new int(42) };                // p1's member points to the int on the heap

	// Allocate array of 6 ints
	unique_ptr<int []> p2 { new int[6] };          // p2's member points to the first element of the array
	
	// Usually better to use std::array or std::vector
	//std::array<int, 6> arr;
	//std::vector<int> vec(6);

	// C++14 has make_unique, which calls new() internally
	auto p3 { make_unique<int> (42) };

	auto p4 { make_unique<int []> (6) };

    unique_ptr<int> p1 { new int(42) };  
	unique_ptr<int []> p2 { new int[6] };
	
	auto p3 { make_unique<int> (42) };
	auto p4 { make_unique<int []> (6) };
	
	cout << *p1 << endl;                        // Single object can be dereferenced
	//cout << p1[0];                            // Error - single object cannot be indexed
	cout << p2[0] << endl;                      // Array can be indexed
	//cout << *p2 << endl;                      // Error - array cannot be dereferenced
	// ++p1;                                    // Error - pointer arithmetic not supported
	// ++p2;                                    // Error - pointer arithmetic not supported
	// p1 = p2;                                 // Error - unique_ptr can only be moved
	// unique_ptr<int> p5(p4);                  // Error - unique_ptr can only be moved
	unique_ptr<int> p5(std::move(p3));          // OK
	//unique_ptr<int> p6(std::move(p4));        // Error - incompatible types
	p1 = nullptr;                               // Calls delete on the pointer member
												// and sets the pointer to nullptr

    // Create a unique_ptr to an point which has initial value {3,6}
	auto p{ make_unique<Point>( Point{3, 6} ) };
	//unique_ptr<Point> p{ new Point{3, 6} };           // C++11

	cout << p->x << ", " << p->y << endl;                                                

    auto p{ make_unique<Point>( Point{3, 6} )};            // Create local unique_ptr object
	func(std::move(p));                                 // Move p into func()   

    auto upp {point_ptr(3, 6) };

	cout << upp->x << ", " << upp->y << endl;
}