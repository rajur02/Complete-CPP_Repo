/* The following code defines a lambda expression and evaluates it twice:

int x{42}, y{99}, z{0};
 
auto lam = [=,&z]() mutable { ++x; ++y; z = x + y; };
lam();
lam();
After executing this code, the resulting values of x, y and z will be one of the following:

x = 42, y = 99, z = 0

x = 42, y = 99, z = 141

x = 42, y = 99, z = 143

x = 42, y = 99, z = 145

x = 44, y = 101, z = 145

Questions for this assignment
Without writing any code, what do you expect the final values of x, y, and z to be?

Write a program to check your answer to the previous question. Check that your program compiles and runs correctly.

Explain your results. 
The compiler will create a class to implement the lambda expression, and an object of that class. Since the lambda expression is mutable, the members of this object can be modified.

x and y are captured by value. This means that the corresponding members of the object are copies of x and y. If these members are modified, the x and y variables will not be changed.

z is captured by reference. The corresponding member of the object will be a reference to z. If this member is modified, the z variable will be modified as well.

When the lambda expression is executed, the copies of x and y are incremented and used to calculate the value of z.

After the first execution, the object's members will have the values 43, 100 and 143. The local variables will have the values 42, 99 and 143.

After the second execution, the object's members will have the values 44, 101 and 145. The local variables will have the values 42, 99 and 145. */

#include <iostream>
using namespace std;

int main()
{
    int x{42}, y{99}, z{0};

    cout << "x = " << x << " y = " << y << " z = " << z << endl;
 
    auto lam = [=,&z]() mutable { ++x; ++y; z = x + y; };
    lam();
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    lam();
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
}