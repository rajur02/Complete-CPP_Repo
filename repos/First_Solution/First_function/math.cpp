#include <iostream>
#include "main.h"

//function definition
int Add(int x, int y) {
	int sum = x + y;
	std::cout << "the sum is :" << sum << std::endl;
	return sum;
}

int Add_ptr(int* a, int* b)
{
	int sum1 = *a + *b;
	return sum1;
}

int AddVal(int* a, int* b, int* result)
{
	*result = *a + *b;
	return 0;
}

void Swap(int* a, int* b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
	std::cout << *a << " " << * b;
}

void Factorial(int* a, int* result)
{
	if (*a == 0 || *a == 1) {
		*result = 1;
	}
	else {
		for (int i = 2; i <= *a; i++) {
			*result *= i;
		}
	}
	std::cout << *result << std::endl;
}

