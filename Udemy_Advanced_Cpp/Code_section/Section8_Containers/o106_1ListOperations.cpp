#include<iostream>
#include<forward_list>
#include<list>

using namespace std;

template<typename T>
void print_list(T& l) {
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

    //sort()
    l.sort();
    cout << "Elements in the list after sorting: " << endl;
    print_list(l);

    //remove()
    l.remove(3);
    cout << "Elements in the list after removing: " << endl;
    print_list(l);

    //merge()
    list<int> l1{1,12,6,24};
    list<int> l2{9,3,14};

    cout << "Elements in l1: "; 
    print_list(l1);

    cout << "Elements in l2: ";
    print_list(l2);

    l1.sort();
    l2.sort();
    l1.merge(l2);

    cout << "Elements in l1 after merge: ";  //Elements in l1 after merge: 1, 3, 6, 9, 12, 14, 24,
    print_list(l1);

    cout << "Elements in l2 after merge: ";  //Elements in l2 after merge:
    print_list(l2);

    //splice()
    list<int> l3{1,12,6,24};
    list<int> l4{9,3,14};

    cout << "Elements in l3: ";
    print_list(l3);

    cout << "Elements in l4: ";
    print_list(l4);

    auto p = begin(l3);
    advance(p,1);
    l3.splice(p,l4);

    cout << "Elements in l3 after splice: ";   //Elements in l3 after splice: 1, 9, 3, 14, 12, 6, 24,
    print_list(l3);

    cout << "Elements in l4 after splice: ";  //Elements in l4 after splice:
    print_list(l4);

    //splice_after() with std::forward_list()
    forward_list<int> l5{1,12,6,24};
    forward_list<int> l6{9,3,14};

    cout << "Elements in l5: ";
    print_list(l5);

    cout << "Elements in l6: ";
    print_list(l6);

    auto p1 = begin(l5);
    l5.splice_after(p1,l6);

    cout << "Elements in l5 after splice: ";   //Elements in l5 after splice: 1, 9, 3, 14, 12, 6, 24,
    print_list(l5);

    cout << "Elements in l6 after splice: ";  //Elements in l6 after splice::
    print_list(l6);

}