#include<iostream>
#include<queue>
using namespace std;

void print(const priority_queue<int>& pq) {
    cout << "The queue is " << (pq.empty() ? "" : "not") << " empty" << endl;
    cout << "The queue contains " << pq.size() << " elements" << endl;
    cout << "The highest priority element is " << pq.top() << endl;
    cout << endl;
}

int main()
{
    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(5);
    pq.push(1);

    print(pq);

    cout << "Adding element with value 2" << endl;
    pq.push(2);
    print(pq);

    cout << "Removing top element" << endl;
    pq.pop();
    print(pq);
}