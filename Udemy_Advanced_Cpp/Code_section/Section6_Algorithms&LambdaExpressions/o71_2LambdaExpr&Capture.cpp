#include <iostream>
using namespace std;

class Test { 
    int time{10};
public: 
    void countdown() {
        //[this] () {    //capture class object by reference
        [*this] () mutable {
            if(time > 0) 
                cout << time << endl;
            else if (time == 0)
                cout << "Lift off!" << endl;
            --time;
        } ();
    }
};

int main() 
{
    Test test;
    for(int i=0; i<12; i++) {
        test.countdown();
    }
}