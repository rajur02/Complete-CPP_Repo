#include <iostream>
#include "reference.h"

using namespace std; 

int main()
{
	//reference
	/* int a, b, sum = 1;
	cin >> a;
	cin >> a >> b;
	int& result = sum;
	Add(a, b, result);
	Factorial(a, result);
	Swap(a, b);
	cout << "sum is: " << result;
	cout << "factorial is: " << result;
	cout << "after swapping: " << a << " " << b; */

	//const example
	/* float radius = 0;
	cout << "Enter the radius: ";
	cin >> radius;
	const float PI = 3.141f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	cout << "Area is: " << area << endl;
	cout << "circumference is: " << circumference << endl; */

	//const with pointer
	/*const int CHUNK_SIZE = 512;
	const int* const ptr = &CHUNK_SIZE;
	//*ptr = 1;
	int x = 10;
	//ptr = &x;
	//*ptr = 1;
	Print1(&x);
	cout << "main->x" << x << endl;*/

	//const with reference
	/*int x = 5;
	Print(x);*/

	//Assignment
	//First question ->Try to modify x1 & x2 and see the compilation output
	/*int x = 5;
	const int MAX = 12;
	int& ref_x1 = x;
	const int& ref_x2 = x;
	ref_x1 = 8;
	//ref_x2 = ref_x1; //cannot modify as it's declared as const
	cout << ref_x1 << endl;*/

	//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
	int x = 5;
	const int* ptr1 = &x;
	int* const ptr2 = &x;
	const int* const ptr3 = &x;
	*ptr2 = 10;
	cout << ptr2 << " " << *ptr2 << endl;

	return 0;
}