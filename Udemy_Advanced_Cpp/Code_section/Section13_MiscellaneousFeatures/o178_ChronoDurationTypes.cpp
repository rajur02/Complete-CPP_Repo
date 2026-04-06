#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;
using namespace std::literals;  // For suffixes

void func(seconds sec) {                            // Function taking chrono::seconds argument
	cout << sec.count() << " seconds\n";
}

int main() {
	seconds s;                                  // Undefined value
	//cout << "Uninitialized seconds variable has value " << s << endl;
	cout << "Uninitialized seconds variable has value " << s.count() << endl;
	
	auto hour = 5h;                             // 5 hour interval
	auto mins = 10min;                          // 10 minute interval
	auto sec = 2s;                              // 2 second interval
	auto msec = 20ms;                           // 20 milliseconds
	auto usec = 50us;                           // 50 microseconds
	auto nsec = 80ns;                           // 80 nanoseconds
	
	cout << "hour = " << hour.count() << " hours " << endl;
	cout << "mins = " << mins.count() << " minutes " << endl;
	cout << "sec = " << sec.count() << " seconds " << endl;
	cout << "msec = " << msec.count() << " milliseconds " << endl;
	cout << "usec = " << usec.count() << " microseconds " << endl;
	cout << "nsec = " << nsec.count() << " nanoseconds " << endl;

    //conversions between different duration types
    //seconds sec = 2;                              // Error - cannot convert from int
	seconds sec = 2s;                               // OK

	//func(2);                                        // Error - cannot convert from int
	func(2s);                                       // OK

    //casting between different duration types
    seconds sec1 = 1h;                                     // OK, s == 3600 seconds
	cout << "sec1 = " << sec1.count() << " seconds" << endl;
	
	//seconds sec2 = 5043ms;                               // Error - data would be lost
	
	seconds s = duration_cast<seconds>(5043ms);            // OK - s is truncated to 5 seconds
	cout << "5043ms converted to " << s.count() << " seconds\n";
	
	seconds s2 = duration_cast<seconds>(-5043ms);          // OK - s2 is truncated to -5 seconds
	cout << "-5043ms converted to " << s2.count() << " seconds\n";

    //operations 
    seconds sec;
	auto s1 = 2s;
	auto s2 = 3s;
	cout << "s1 = " << s1.count() << " seconds" << endl;
	cout << "s2 = " << s2.count() << " seconds" << endl;
	
	sec = s1 + s2;                                         // s == 5 seconds
	cout << "sec = " << sec.count() << " seconds" << endl;
	
	auto msec = sec + 43ms;                               // ms == 5043 milliseconds
	cout << "msec = " << msec.count() << " milliseconds" << endl;
}