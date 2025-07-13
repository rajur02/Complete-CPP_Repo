#include<iostream>
#include<list>

using namespace std;

void print_list(list<int>& l) {
    for(auto el : l) {
        cout << el << ", ";
    }
    cout << endl;
}

int main()
{
    list<int> l{4,3,1};

    cout << "Initial elements in the list: " << endl;
    print_list(l);

    auto last = end(l);
    advance(last, -1);
    auto two = l.insert(last, 2);

    cout << "Elements in list after inserting two: " << endl;
    print_list(l);

    l.erase(two);

    cout << "Elements in list after erasing two: " << endl;
    print_list(l);

}