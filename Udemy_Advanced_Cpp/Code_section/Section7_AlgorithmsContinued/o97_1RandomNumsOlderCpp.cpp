#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));  //use current time as seed 

    cout << "Printing out a random number... " << rand() << endl;   //Printing out a random number... 41

    cout << 0.1*rand()/RAND_MAX << endl;  //0.0563585

    for(int i=0; i<10; ++i)
        cout << (99*rand()/RAND_MAX+1) << ", ";  //20, 81, 58, 48, 35, 89, 82, 74, 18, 86,
    cout << endl;

}