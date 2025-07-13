#include<iostream>
#include<queue>
using namespace std;

void print(const queue<int>& q) {
    cout << "The queue is " << (q.empty() ? "" : "not") << " empty" << endl;
    cout << "The queue contains " << q.size() << " elements" << endl;
    cout << "The first element is " << q.front() << endl;
    cout << "The Last element is " << q.back() << endl;
}

int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(5);
    q.push(1);

    print(q);

    cout << "Adding element with value 2" << endl;
    q.push(2);
    print(q);

    cout << "Removing first element" << endl;
    q.pop();
    print(q);
}