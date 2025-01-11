#include <iostream>
#include <vector>
using namespace std;

class divisible {
    int divisor{1};
public: 
    divisible(int d) : divisor(d) {}
    bool operator() (int n) {
        return (n % divisor == 0);
    }
};

void do_it(const vector<int> vec, divisible is_div) {
    for(auto v : vec) {
        if(is_div(v))
            cout << v << " is divisible" << endl;
    }
}

int main()
{
    divisible divisible_by_three{3};

    vector<int> numbers {1,4,7,11,12,23,36};

    cout << "Vector: ";
    for(auto number : numbers) {
        cout << number << ", ";
    }
    cout << endl;

    do_it(numbers, divisible_by_three);
}