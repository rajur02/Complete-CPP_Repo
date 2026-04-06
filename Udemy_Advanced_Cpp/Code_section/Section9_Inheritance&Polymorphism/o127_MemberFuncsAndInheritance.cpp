#include <iostream>

using namespace std;

class Vehicle {
protected:
    void kids_only();                              // Can only be called by this class  and its children

public:
    void start() { cout << "Engine started: "; }
};
class Aeroplane : public Vehicle {
    public:
    void start() {
        cout << "Carrying out checks... ";
		Vehicle::start();                                           // Call base class member function
        cout << "Ready for take-off!";
    }
    void do_something() { kids_only(); }           // Child can call protected member function
};

int main() {
	Aeroplane plane;
	plane.start();    // Calls start() on an Aeroplane object. Prints out "Engine started: "
	cout << "\n";

    Vehicle vehicle;
	//vehicle.kids_only();                           // Cannot be called by "outsider" code
}