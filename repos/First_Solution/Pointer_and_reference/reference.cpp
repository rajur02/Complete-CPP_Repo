#include<iostream>
#include "reference.h"

void Add(int a, int b, int& result)
{
	result = a + b;
	return;
}

void Factorial(int a, int& result)
{
	if (a == 0 || a == 1) {
		result = 1;
	}
	else {
		for (int i = 2; i <= a; i++) {
			result *= i;
		}
	}
}

void Swap(int& a, int& b)
{
	int swap = a;
	a = b;
	b = swap;
}

void Print1(const int* ptr) {
	std::cout << *ptr << std:: endl;
	//*ptr = 700;
}

void Print(const int& ref) {
	std::cout << ref << std::endl;
}
