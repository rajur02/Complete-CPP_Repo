#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swap1(int &x, int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}

int main()
{
    int num1=10, num2=20;
    swap(&num1, &num2);
    cout << "After swap: " << num1 << ", " << num2 << endl;
    swap1(num1, num2);
    cout << "After swap1: " << num1 << ", " << num2 << endl;
}