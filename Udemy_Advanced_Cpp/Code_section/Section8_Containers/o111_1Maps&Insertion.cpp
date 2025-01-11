#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;

void print(const map<string, int>& scores) {
    cout << "Map elements:" << endl;

    for(auto it : scores) {
        cout << it.first << " has a score of " << it.second << endl;
    }
    cout << endl;
}

int main()
{
    map<string, int> scores;
    scores.insert(make_pair("Maybelline", 86));
    scores.insert({"Graham", 78});

    print(scores);

    //insert()
    auto res = scores.insert(make_pair("Graham", 66));

    auto itr = res.first;
    if(res.second) {
        cout << "Inserted a new element with name " << itr->first << " and score " << itr->second << endl;
    }
    else { 
        cout << "Modifying existing element with name " << itr->first;
        itr->second = 66;
        cout << " to have score " << itr->second << endl;
    }
}