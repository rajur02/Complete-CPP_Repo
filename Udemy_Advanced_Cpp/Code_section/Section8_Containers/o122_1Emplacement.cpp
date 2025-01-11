#include<iostream>
#include<vector>
#include<map>
using namespace std;

class refrigerator {
    int temperature;
    bool door_open;
    bool power_on;
public:
    refrigerator(int temp, bool open, bool power) : temperature(temp), door_open(open), power_on(power) {}
    void print() {
        cout << "Temperature: " << temperature;
        cout << boolalpha;
        cout << ", door_open: " << door_open;
        cout << ", power_on: " << power_on;
    }
};

int main()
{
    vector<refrigerator> vec;
    
    refrigerator fridge(2, false, true);
    //vec.insert(begin(vec), fridge);
    //push_back()
    vec.push_back(fridge);

    //vec.insert(end(vec), refrigerator(3, false, true));
    vec.push_back(refrigerator(3, false, true));

    //vec.emplace(end(vec), 5, false, false);
    vec.emplace_back(5, false, false);

    cout << "Vector elements" << endl;
    for(auto el : vec) {
        el.print();
        cout << endl;
    }

    //using map
    map<string, refrigerator> fridges;

    refrigerator meat_frigde(1, false, true);
    fridges.insert_or_assign("Meat fridge", meat_frigde);

    fridges.insert_or_assign("Dairy fridge", refrigerator(3, false, true));

    auto[iter, success] = fridges.try_emplace("Not in use", 5, false, false);

    if(success) {
        cout << "Inserted the new element" << endl;
    }
    else {
        auto[name, fridge] = *iter;
        cout << "Insert failed: " << "existing element with the name " << name << " and data ";
        fridge.print();
        cout << endl; 
    }

    cout << "Refrigerators:" << endl;
    for(auto[name, fridge] : fridges) {
        cout << name << ": ";
        fridge.print();
        cout << endl;
    }
}