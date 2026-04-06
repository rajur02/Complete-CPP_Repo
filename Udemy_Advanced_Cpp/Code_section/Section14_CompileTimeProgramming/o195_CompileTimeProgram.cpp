#include <iostream>
#include <type_traits>

#define Max(x, y) ((x) > (y) ? (x) : (y))

class A {};

int main() {
	int a{5}, b{2};
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Max(a, b): " << Max(a, b) << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Max(a++, b): " << Max(++a, b) << std::endl;  // Replaced by ((++a) > (b) ? (++a) : (b))
	std::cout << "a = " << a << ", b = " << b << std::endl;    // a may be incremented twice


    std::cout << std::boolalpha;
	std::cout << "is_arithmetic<int>: " << std::is_arithmetic<int>::value  << '\n';            // true
	std::cout << "is_floating_point<int>: " << std::is_floating_point<int>::value  << '\n';    // false
    std::cout << "is_class<A>: " << std::is_class<A>::value << '\n';                           // true
	std::cout << "is_pointer<const char *>: " << std::is_pointer<const char *>::value << '\n'; // false
}
