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
    cout << "Adding elements with key Graham: "<< endl;
    auto ret = scores.insert({"Graham", 66});
    if(ret.second) {
        cout << "Added element with key Graham to the map" << endl;
    }
    else {
        auto it = ret.first;
        cout << "Map already contains an element with key: " << it->first << " Which has value: " << it->second << endl;
    }

    print(scores);

    //remove()
    cout << "Removing element with key Graham";
    scores.erase("Graham");

    print(scores);

    auto ret2 = scores.insert({"Graham", 66});
    if(ret2.second) {
        cout << "Added element with key Graham to the map" << endl;
    }
    else {
        auto it2 = ret.first;
        cout << "Map already contains an element with key: " << it2->first << " Which has value: " << it2->second << endl;
    }
    print(scores);

    //Map subscript
    cout << "Graham has the score of " << scores["Graham"] << endl;
    print(scores);

    cout << "Setting Grahams score to 90" << endl;
    scores["Graham"] = 90;
    print(scores);

    cout << "Adding Grace's score to 90" << endl;
    scores["Grace"] = 90;
    print(scores);

    //find()
    cout << "Calling find or find_if" << endl;
    //auto gra = scores.find("Graham");
    auto gra = find_if(begin(scores), end(scores), [](pair<string, int> p) { return p.first == "Graham";});

    if(gra != scores.end()) {
        cout << "Found an element with key " << gra->first << " which has score of " << gra->second << endl;
        cout << "Changing Graham's score to 67" << endl;
        gra->second = 67;
        print(scores);
    }
    else
    {
        cout << "The map has no element with Graham" << endl;
    }

    //count()
    cout << "Calling count or count_if" << endl;
    //auto n = scores.count("Graham");
    auto n = count_if(begin(scores), end(scores), [](pair<string, int> p) { return p.first == "Graham";});
    if(n==1)
        cout << "The map has one element with key Graham" << endl;
    else
        cout << "the map has no element with key Graham" << endl;

}