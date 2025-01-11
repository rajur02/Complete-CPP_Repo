#include <iostream>
using namespace std;

class Internet { 
public:
    void connect() { cout << "Connected to internet\n"; }
    void login(const string& id, const string& pwd) {
        cout << "Logged with username: " << id << " and password: " << pwd << endl;
    }
};

class refrigerator { 
    int temperature{2};
    bool door_open{false};
    bool power_on{true};
    Internet internet;
public:
    //Using Init function
    /* void init(const string& id, const string& pwd) {
        internet.connect();
        internet.login(id, pwd);
    }
    refrigerator() { 
        init("me", "secret"); 
    }

    refrigerator(int temperature) : temperature(temperature) {
        init("me", "secret");
    }

    refrigerator(const string& id, const string& pwd) {
        init(id, pwd);
    }

    refrigerator(int temperature, const string& id, const string& pwd) : temperature(temperature) {
        init(id, pwd);
    } */

    //Deligated constructor
    //Default constructor
    refrigerator() : refrigerator(2, "me", "secret") {}

    //Constructor using defualt login
    refrigerator(int temperature) : refrigerator(temperature, "me", "secret") {}

    //Constructor using default temperature
    refrigerator(const string& id, const string& pwd) : refrigerator(2, id, pwd) {}

    //Constructor with no defaults
    refrigerator(int temperature, const string& id, const string& pwd) : temperature(temperature) {
        internet.connect();
        internet.login(id, pwd);
    } 

    void print() {
        cout << "Temperature is : " << temperature << endl;
        cout << boolalpha;
        cout << "door_open : " << door_open << endl;
        cout << "power_on : " << power_on << endl;
    }
};

int main() 
{
    refrigerator fridge;
    fridge.print();
}