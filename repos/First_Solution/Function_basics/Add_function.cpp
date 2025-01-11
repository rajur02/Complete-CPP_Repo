#include<iostream>
#include "Add_function.h"

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	int result = Add(x, y);
}

int Add(int x, int y) {
	int sum = x + y;
	cout << "the sum is :" << sum << endl;
	return sum;
}