#include<iostream>
#include "main.h"

using namespace std;

int main()
{
	int x, result=1;
	//int x, y;
	//int a, b, result=0;
	//cin >> x >> y;
	//cin >> a >> b;
	//cin >> x >> y;
	cin >> x;
	//invoke the function
	//int result = Add(x, y);
	//int result1 = Add_ptr(&a, &b);
	//AddVal(&a, &b, &result);
	//cout << result << endl;
	//Swap(&x, &y);
	Factorial(&x, &result);
}

