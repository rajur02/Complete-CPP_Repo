#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void print(const set<int>& s) {
    cout << "Elements of set: ";

    for(auto el : s)
        cout << el << ", ";

    cout << endl << endl;
}

int main()
{
    set<int> s;
    s.insert(6);
    s.insert(7);
    s.insert(4);
    s.insert(5);
    s.insert(3);

    print(s);

    //insert()
    auto ret = s.insert(3);
    if(ret.second) 
        cout << "Added element with key 3 to set" << endl;
    else    
        cout <<  "Set already contains element with key 3" << endl;

    print(s);

    //erase()
    cout << "Removing element with key 3" << endl;
    s.erase(3);
    print(s);

    auto ret2 = s.insert(3);
    if(ret2.second) 
        cout << "Added element with key 3 to set" << endl;
    else    
        cout <<  "Set already contains element with key 3" << endl;
    
    print(s);

    //find()
    cout << "Calling find(7)" << endl;
    auto it = s.find(7);
    if(it != s.end()) 
        cout << "Set has the element with key " << *it << endl;
    else
        cout << "The set has no element with key 7" << endl;

    cout << endl;
    
    //count()
    cout << "Calling count(7)" << endl;
    auto n = s.count(7);
    if(n==1)
        cout << "The set has one element with key 7" << endl;
    else
        cout << "the set has no element with key 7" << endl;

    cout << endl;

     //find_if()
    cout << "Calling find_if()" << endl;
    auto it1 = find_if(cbegin(s), cend(s), [](int n){return n==7;});
    if(it1 != s.end()) 
        cout << "Set has the element with key " << *it << endl;
    else
        cout << "The set has no element with key 7" << endl;
    cout << endl;

    //count_if()
    cout << "Calling count_if" << endl;
    auto n1 = count_if(cbegin(s), cend(s), [](int n){return n==7;});
    if(n1==1)
        cout << "The set has one element with key 7" << endl;
    else
        cout << "the set has no element with key 7" << endl;
    cout << endl;
}