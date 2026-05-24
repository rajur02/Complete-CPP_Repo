/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
$$ 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1$$
Your task is to simulate the execution of the algorithm for a given value of n.
Input
The only input line contains an integer n.
Output
Print a line that contains all values of n during the algorithm.

Constraints
1 <= n <= 10^6

Example
Input:
3

Output:
3 10 5 16 8 4 2 1
*/

#include<iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << " ";
    while(n != 1) {
        if(n%2 == 0) {
            n/=2;
        } else {
            n = (n*3)+1;
        }
        cout << n << " ";
    }

    //one more solution with bitwise checking
    long long int n1;
	cin >> n1;
	cout << n1 << " ";
	while (n1 > 1)
	{
		if (n1 & 1)
			n1 = (3 * n1) + 1;
		else
			n1 >>= 1;
		cout << n1 << " ";
	}
    return 0;
}