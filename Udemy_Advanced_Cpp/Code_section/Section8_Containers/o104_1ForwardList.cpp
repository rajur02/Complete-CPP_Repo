#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list<int> l{4,3,1};

    cout << "Initial elements in list" << endl;
    for(auto el : l) {
        cout << el << ", ";
    }
    cout << endl;

    auto second = l.begin();
    advance(second, 1);
    l.insert_after(second, 2);

    cout << "Elements list after inserting" << endl;
    for(auto el : l) {
        cout << el << ", ";
    }
    cout << endl;

    l.erase_after(second);

    cout << "Elements list after erasing" << endl;
    for(auto el : l) {
        cout << el << ", ";
    }
    cout << endl;    
}