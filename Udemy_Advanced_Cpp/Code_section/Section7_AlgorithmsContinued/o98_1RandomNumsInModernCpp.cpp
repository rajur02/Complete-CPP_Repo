#include<iostream>
#include<random>
using namespace std;

int main()
{
    default_random_engine eng;
    for(int i=0; i<5; ++i) {
        cout << eng() << ", ";
    }
    cout << endl;

    mt19937 mt;

    uniform_int_distribution<int> idist(0,10);

    cout << "Five random integers between 0 to 10: " << endl;
    for(int i=0; i<5; ++i) {
        cout << idist(mt) << ", ";
    }
    cout << endl;

    uniform_real_distribution<double> fdist(0,10);

    cout << "Five random floating-point numbers between 0 to 10: " << endl;
    for(int i=0; i<5; ++i) {
        cout << fdist(mt) << ", ";
    }
    cout << endl;
}