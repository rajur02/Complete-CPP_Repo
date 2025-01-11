#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> dq{4,2,3,5,1};
    dq.push_back(4);
    dq.push_back(2);
    dq.push_front(1);
    dq.push_front(5);
    dq.push_front(3);

    for(auto it : dq) {
        cout << it << ", ";
    }
    cout << endl;
}