#include <iostream>
using namespace std;

int main()
{
    //string str{"Hello"};
    string str{"12345"};


    cout << "str: " << str << endl;
    //cout << "Number of elements: " << str.end() - str.begin() << endl;
    cout << "Number of elements: " << distance(begin(str), end(str)) << endl;


    //auto second = begin(str)+1;
    auto second = next(begin(str));
    if(second!=end(str))
        cout << "Second element is: " << *second << endl;

    //auto last = end(str)-1;
    auto last = prev(end(str));
    if(last!=end(str))
        cout << "Last element is: " <<  *last << endl;

    //auto middle = begin(str) + (end(str)-begin(str))/2;
    //cout << "Middle element is: " << *middle << endl;
    auto mid = begin(str);
    advance(mid, distance(begin(str), end(str))/2);

    if(mid!=end(str))
        cout << "Middle element is: " << *mid;
        cout << " with index: " << distance(begin(str), mid) << endl;
}